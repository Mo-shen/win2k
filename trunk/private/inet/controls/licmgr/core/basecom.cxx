//  File:       basecom.cxx
//  Synopsis:   This file contains implementations of the root COM objects

#include <core.hxx>


void SRelease(IUnknown *  pUnk)
{
    if (pUnk)
    {
        pUnk->Release();
    }
}


void SClear(IUnknown ** ppUnk)
{
    Assert(ppUnk);

    if (*ppUnk)
    {
        (*ppUnk)->Release();
        *ppUnk = NULL;
    }
}


STDMETHODIMP CComponent::PublicQueryInterface(REFIID  riid, void ** ppvObj)
{
    return _pUnkOuter->QueryInterface(riid, ppvObj);
}


STDMETHODIMP_(ULONG) CComponent::PublicAddRef()
{
    return _pUnkOuter->AddRef();
}


STDMETHODIMP_(ULONG) CComponent::PublicRelease()
{
    return _pUnkOuter->Release();
}


HRESULT CComponent::PrivateQueryInterface(REFIID  riid, void ** ppvObj)
{
    if (riid == IID_IUnknown)
    {
        *ppvObj = (void *)(IUnknown *)&_Unk;
        return S_OK;
    }
    
    return E_NOINTERFACE;
}


STDMETHODIMP CComponent::CUnknown::QueryInterface(REFIID  riid, void ** ppvObj)
{
    HRESULT hr;

    Assert(ppvObj);
    if (!ppvObj)
        return E_INVALIDARG;

    *ppvObj = NULL;

    hr = OWNING_CLASS(CComponent, _Unk)->PrivateQueryInterface(riid, ppvObj);
    if (!hr)
    {
        Assert(*ppvObj);
        ((IUnknown *)*ppvObj)->AddRef();
        hr = S_OK;
    }

    return hr;
}


STDMETHODIMP_(ULONG) CComponent::CUnknown::AddRef()
{
    return ++(OWNING_CLASS(CComponent, _Unk)->_cRefs);
}


STDMETHODIMP_(ULONG) CComponent::CUnknown::Release()
{
    CComponent *    pComp = OWNING_CLASS(CComponent, _Unk);

    Assert(OWNING_CLASS(CComponent, _Unk)->_cRefs);

    if (!--pComp->_cRefs)
    {
        pComp->_cRefs += REF_GUARD;
        delete pComp;
        return 0;
    }
    
    return pComp->_cRefs;
}

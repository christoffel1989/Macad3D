// Generated wrapper code for package SelectMgr

#include "OcctPCH.h"
#include "SelectMgr.h"

using namespace System::Runtime::InteropServices; // for class Marshal

#include "NCollection.h"
#include "SelectMgr.h"
#include "Standard.h"
#include "Graphic3d.h"
#include "gp.h"
#include "StdSelect.h"
#include "AIS.h"
#include "PrsMgr.h"
#include "Prs3d.h"
#include "TopLoc.h"
#include "V3d.h"
#include "TopAbs.h"
#include "Bnd.h"
#include "SelectBasics.h"
#include "TColgp.h"
#include "TColStd.h"
#include "TCollection.h"
#include "Image.h"


//---------------------------------------------------------------------
//  Class  SelectMgr_ListOfFilter
//---------------------------------------------------------------------

Macad::Occt::SelectMgr_ListOfFilter::SelectMgr_ListOfFilter()
	: BaseClass<::SelectMgr_ListOfFilter>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::SelectMgr_ListOfFilter();
}

Macad::Occt::SelectMgr_ListOfFilter::SelectMgr_ListOfFilter(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
	: BaseClass<::SelectMgr_ListOfFilter>(BaseClass::InitMode::Uninitialized)
{
	Handle(::NCollection_BaseAllocator) h_theAllocator = theAllocator->NativeInstance;
	_NativeInstance = new ::SelectMgr_ListOfFilter(h_theAllocator);
	theAllocator->NativeInstance = h_theAllocator.get();
}

Macad::Occt::SelectMgr_ListOfFilter::SelectMgr_ListOfFilter(Macad::Occt::SelectMgr_ListOfFilter^ theOther)
	: BaseClass<::SelectMgr_ListOfFilter>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::SelectMgr_ListOfFilter(*(::SelectMgr_ListOfFilter*)theOther->NativeInstance);
}

int Macad::Occt::SelectMgr_ListOfFilter::Size()
{
	return ((::SelectMgr_ListOfFilter*)_NativeInstance)->Size();
}

Macad::Occt::SelectMgr_ListOfFilter^ Macad::Occt::SelectMgr_ListOfFilter::Assign(Macad::Occt::SelectMgr_ListOfFilter^ theOther)
{
	::SelectMgr_ListOfFilter* _result = new ::SelectMgr_ListOfFilter();
	*_result = ((::SelectMgr_ListOfFilter*)_NativeInstance)->Assign(*(::SelectMgr_ListOfFilter*)theOther->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::SelectMgr_ListOfFilter(_result);
}

void Macad::Occt::SelectMgr_ListOfFilter::Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
{
	Handle(::NCollection_BaseAllocator) h_theAllocator = theAllocator->NativeInstance;
	((::SelectMgr_ListOfFilter*)_NativeInstance)->Clear(h_theAllocator);
	theAllocator->NativeInstance = h_theAllocator.get();
}

void Macad::Occt::SelectMgr_ListOfFilter::Clear()
{
	((::SelectMgr_ListOfFilter*)_NativeInstance)->Clear(0L);
}

Macad::Occt::SelectMgr_Filter^ Macad::Occt::SelectMgr_ListOfFilter::First()
{
	Handle(::SelectMgr_Filter) _result;
	_result = ((::SelectMgr_ListOfFilter*)_NativeInstance)->First();
	 return _result.IsNull() ? nullptr : Macad::Occt::SelectMgr_Filter::CreateDowncasted( _result.get());
}

Macad::Occt::SelectMgr_Filter^ Macad::Occt::SelectMgr_ListOfFilter::Last()
{
	Handle(::SelectMgr_Filter) _result;
	_result = ((::SelectMgr_ListOfFilter*)_NativeInstance)->Last();
	 return _result.IsNull() ? nullptr : Macad::Occt::SelectMgr_Filter::CreateDowncasted( _result.get());
}

Macad::Occt::SelectMgr_Filter^ Macad::Occt::SelectMgr_ListOfFilter::Append(Macad::Occt::SelectMgr_Filter^ theItem)
{
	Handle(::SelectMgr_Filter) h_theItem = theItem->NativeInstance;
	Handle(::SelectMgr_Filter) _result;
	_result = ((::SelectMgr_ListOfFilter*)_NativeInstance)->Append(h_theItem);
	theItem->NativeInstance = h_theItem.get();
	 return _result.IsNull() ? nullptr : Macad::Occt::SelectMgr_Filter::CreateDowncasted( _result.get());
}

void Macad::Occt::SelectMgr_ListOfFilter::Append(Macad::Occt::SelectMgr_ListOfFilter^ theOther)
{
	((::SelectMgr_ListOfFilter*)_NativeInstance)->Append(*(::SelectMgr_ListOfFilter*)theOther->NativeInstance);
}

Macad::Occt::SelectMgr_Filter^ Macad::Occt::SelectMgr_ListOfFilter::Prepend(Macad::Occt::SelectMgr_Filter^ theItem)
{
	Handle(::SelectMgr_Filter) h_theItem = theItem->NativeInstance;
	Handle(::SelectMgr_Filter) _result;
	_result = ((::SelectMgr_ListOfFilter*)_NativeInstance)->Prepend(h_theItem);
	theItem->NativeInstance = h_theItem.get();
	 return _result.IsNull() ? nullptr : Macad::Occt::SelectMgr_Filter::CreateDowncasted( _result.get());
}

void Macad::Occt::SelectMgr_ListOfFilter::Prepend(Macad::Occt::SelectMgr_ListOfFilter^ theOther)
{
	((::SelectMgr_ListOfFilter*)_NativeInstance)->Prepend(*(::SelectMgr_ListOfFilter*)theOther->NativeInstance);
}

void Macad::Occt::SelectMgr_ListOfFilter::RemoveFirst()
{
	((::SelectMgr_ListOfFilter*)_NativeInstance)->RemoveFirst();
}

void Macad::Occt::SelectMgr_ListOfFilter::Reverse()
{
	((::SelectMgr_ListOfFilter*)_NativeInstance)->Reverse();
}




//---------------------------------------------------------------------
//  Class  SelectMgr_SequenceOfSelection
//---------------------------------------------------------------------

Macad::Occt::SelectMgr_SequenceOfSelection::SelectMgr_SequenceOfSelection()
	: BaseClass<::SelectMgr_SequenceOfSelection>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::SelectMgr_SequenceOfSelection();
}

Macad::Occt::SelectMgr_SequenceOfSelection::SelectMgr_SequenceOfSelection(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
	: BaseClass<::SelectMgr_SequenceOfSelection>(BaseClass::InitMode::Uninitialized)
{
	Handle(::NCollection_BaseAllocator) h_theAllocator = theAllocator->NativeInstance;
	_NativeInstance = new ::SelectMgr_SequenceOfSelection(h_theAllocator);
	theAllocator->NativeInstance = h_theAllocator.get();
}

Macad::Occt::SelectMgr_SequenceOfSelection::SelectMgr_SequenceOfSelection(Macad::Occt::SelectMgr_SequenceOfSelection^ theOther)
	: BaseClass<::SelectMgr_SequenceOfSelection>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::SelectMgr_SequenceOfSelection(*(::SelectMgr_SequenceOfSelection*)theOther->NativeInstance);
}

int Macad::Occt::SelectMgr_SequenceOfSelection::Size()
{
	return ((::SelectMgr_SequenceOfSelection*)_NativeInstance)->Size();
}

int Macad::Occt::SelectMgr_SequenceOfSelection::Length()
{
	return ((::SelectMgr_SequenceOfSelection*)_NativeInstance)->Length();
}

int Macad::Occt::SelectMgr_SequenceOfSelection::Lower()
{
	return ((::SelectMgr_SequenceOfSelection*)_NativeInstance)->Lower();
}

int Macad::Occt::SelectMgr_SequenceOfSelection::Upper()
{
	return ((::SelectMgr_SequenceOfSelection*)_NativeInstance)->Upper();
}

bool Macad::Occt::SelectMgr_SequenceOfSelection::IsEmpty()
{
	return ((::SelectMgr_SequenceOfSelection*)_NativeInstance)->IsEmpty();
}

void Macad::Occt::SelectMgr_SequenceOfSelection::Reverse()
{
	((::SelectMgr_SequenceOfSelection*)_NativeInstance)->Reverse();
}

void Macad::Occt::SelectMgr_SequenceOfSelection::Exchange(int I, int J)
{
	((::SelectMgr_SequenceOfSelection*)_NativeInstance)->Exchange(I, J);
}

void Macad::Occt::SelectMgr_SequenceOfSelection::Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
{
	Handle(::NCollection_BaseAllocator) h_theAllocator = theAllocator->NativeInstance;
	((::SelectMgr_SequenceOfSelection*)_NativeInstance)->Clear(h_theAllocator);
	theAllocator->NativeInstance = h_theAllocator.get();
}

void Macad::Occt::SelectMgr_SequenceOfSelection::Clear()
{
	((::SelectMgr_SequenceOfSelection*)_NativeInstance)->Clear(0L);
}

Macad::Occt::SelectMgr_SequenceOfSelection^ Macad::Occt::SelectMgr_SequenceOfSelection::Assign(Macad::Occt::SelectMgr_SequenceOfSelection^ theOther)
{
	::SelectMgr_SequenceOfSelection* _result = new ::SelectMgr_SequenceOfSelection();
	*_result = ((::SelectMgr_SequenceOfSelection*)_NativeInstance)->Assign(*(::SelectMgr_SequenceOfSelection*)theOther->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::SelectMgr_SequenceOfSelection(_result);
}

void Macad::Occt::SelectMgr_SequenceOfSelection::Remove(int theIndex)
{
	((::SelectMgr_SequenceOfSelection*)_NativeInstance)->Remove(theIndex);
}

void Macad::Occt::SelectMgr_SequenceOfSelection::Remove(int theFromIndex, int theToIndex)
{
	((::SelectMgr_SequenceOfSelection*)_NativeInstance)->Remove(theFromIndex, theToIndex);
}

void Macad::Occt::SelectMgr_SequenceOfSelection::Append(Macad::Occt::SelectMgr_Selection^ theItem)
{
	Handle(::SelectMgr_Selection) h_theItem = theItem->NativeInstance;
	((::SelectMgr_SequenceOfSelection*)_NativeInstance)->Append(h_theItem);
	theItem->NativeInstance = h_theItem.get();
}

void Macad::Occt::SelectMgr_SequenceOfSelection::Append(Macad::Occt::SelectMgr_SequenceOfSelection^ theSeq)
{
	((::SelectMgr_SequenceOfSelection*)_NativeInstance)->Append(*(::SelectMgr_SequenceOfSelection*)theSeq->NativeInstance);
}

void Macad::Occt::SelectMgr_SequenceOfSelection::Prepend(Macad::Occt::SelectMgr_Selection^ theItem)
{
	Handle(::SelectMgr_Selection) h_theItem = theItem->NativeInstance;
	((::SelectMgr_SequenceOfSelection*)_NativeInstance)->Prepend(h_theItem);
	theItem->NativeInstance = h_theItem.get();
}

void Macad::Occt::SelectMgr_SequenceOfSelection::Prepend(Macad::Occt::SelectMgr_SequenceOfSelection^ theSeq)
{
	((::SelectMgr_SequenceOfSelection*)_NativeInstance)->Prepend(*(::SelectMgr_SequenceOfSelection*)theSeq->NativeInstance);
}

void Macad::Occt::SelectMgr_SequenceOfSelection::InsertBefore(int theIndex, Macad::Occt::SelectMgr_Selection^ theItem)
{
	Handle(::SelectMgr_Selection) h_theItem = theItem->NativeInstance;
	((::SelectMgr_SequenceOfSelection*)_NativeInstance)->InsertBefore(theIndex, h_theItem);
	theItem->NativeInstance = h_theItem.get();
}

void Macad::Occt::SelectMgr_SequenceOfSelection::InsertBefore(int theIndex, Macad::Occt::SelectMgr_SequenceOfSelection^ theSeq)
{
	((::SelectMgr_SequenceOfSelection*)_NativeInstance)->InsertBefore(theIndex, *(::SelectMgr_SequenceOfSelection*)theSeq->NativeInstance);
}

void Macad::Occt::SelectMgr_SequenceOfSelection::InsertAfter(int theIndex, Macad::Occt::SelectMgr_SequenceOfSelection^ theSeq)
{
	((::SelectMgr_SequenceOfSelection*)_NativeInstance)->InsertAfter(theIndex, *(::SelectMgr_SequenceOfSelection*)theSeq->NativeInstance);
}

void Macad::Occt::SelectMgr_SequenceOfSelection::InsertAfter(int theIndex, Macad::Occt::SelectMgr_Selection^ theItem)
{
	Handle(::SelectMgr_Selection) h_theItem = theItem->NativeInstance;
	((::SelectMgr_SequenceOfSelection*)_NativeInstance)->InsertAfter(theIndex, h_theItem);
	theItem->NativeInstance = h_theItem.get();
}

void Macad::Occt::SelectMgr_SequenceOfSelection::Split(int theIndex, Macad::Occt::SelectMgr_SequenceOfSelection^ theSeq)
{
	((::SelectMgr_SequenceOfSelection*)_NativeInstance)->Split(theIndex, *(::SelectMgr_SequenceOfSelection*)theSeq->NativeInstance);
}

Macad::Occt::SelectMgr_Selection^ Macad::Occt::SelectMgr_SequenceOfSelection::First()
{
	Handle(::SelectMgr_Selection) _result;
	_result = ((::SelectMgr_SequenceOfSelection*)_NativeInstance)->First();
	 return _result.IsNull() ? nullptr : Macad::Occt::SelectMgr_Selection::CreateDowncasted( _result.get());
}

Macad::Occt::SelectMgr_Selection^ Macad::Occt::SelectMgr_SequenceOfSelection::ChangeFirst()
{
	Handle(::SelectMgr_Selection) _result;
	_result = ((::SelectMgr_SequenceOfSelection*)_NativeInstance)->ChangeFirst();
	 return _result.IsNull() ? nullptr : Macad::Occt::SelectMgr_Selection::CreateDowncasted( _result.get());
}

Macad::Occt::SelectMgr_Selection^ Macad::Occt::SelectMgr_SequenceOfSelection::Last()
{
	Handle(::SelectMgr_Selection) _result;
	_result = ((::SelectMgr_SequenceOfSelection*)_NativeInstance)->Last();
	 return _result.IsNull() ? nullptr : Macad::Occt::SelectMgr_Selection::CreateDowncasted( _result.get());
}

Macad::Occt::SelectMgr_Selection^ Macad::Occt::SelectMgr_SequenceOfSelection::ChangeLast()
{
	Handle(::SelectMgr_Selection) _result;
	_result = ((::SelectMgr_SequenceOfSelection*)_NativeInstance)->ChangeLast();
	 return _result.IsNull() ? nullptr : Macad::Occt::SelectMgr_Selection::CreateDowncasted( _result.get());
}

Macad::Occt::SelectMgr_Selection^ Macad::Occt::SelectMgr_SequenceOfSelection::Value(int theIndex)
{
	Handle(::SelectMgr_Selection) _result;
	_result = ((::SelectMgr_SequenceOfSelection*)_NativeInstance)->Value(theIndex);
	 return _result.IsNull() ? nullptr : Macad::Occt::SelectMgr_Selection::CreateDowncasted( _result.get());
}

Macad::Occt::SelectMgr_Selection^ Macad::Occt::SelectMgr_SequenceOfSelection::ChangeValue(int theIndex)
{
	Handle(::SelectMgr_Selection) _result;
	_result = ((::SelectMgr_SequenceOfSelection*)_NativeInstance)->ChangeValue(theIndex);
	 return _result.IsNull() ? nullptr : Macad::Occt::SelectMgr_Selection::CreateDowncasted( _result.get());
}

void Macad::Occt::SelectMgr_SequenceOfSelection::SetValue(int theIndex, Macad::Occt::SelectMgr_Selection^ theItem)
{
	Handle(::SelectMgr_Selection) h_theItem = theItem->NativeInstance;
	((::SelectMgr_SequenceOfSelection*)_NativeInstance)->SetValue(theIndex, h_theItem);
	theItem->NativeInstance = h_theItem.get();
}




//---------------------------------------------------------------------
//  Class  SelectMgr_SequenceOfOwner
//---------------------------------------------------------------------

Macad::Occt::SelectMgr_SequenceOfOwner::SelectMgr_SequenceOfOwner()
	: BaseClass<::SelectMgr_SequenceOfOwner>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::SelectMgr_SequenceOfOwner();
}

Macad::Occt::SelectMgr_SequenceOfOwner::SelectMgr_SequenceOfOwner(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
	: BaseClass<::SelectMgr_SequenceOfOwner>(BaseClass::InitMode::Uninitialized)
{
	Handle(::NCollection_BaseAllocator) h_theAllocator = theAllocator->NativeInstance;
	_NativeInstance = new ::SelectMgr_SequenceOfOwner(h_theAllocator);
	theAllocator->NativeInstance = h_theAllocator.get();
}

Macad::Occt::SelectMgr_SequenceOfOwner::SelectMgr_SequenceOfOwner(Macad::Occt::SelectMgr_SequenceOfOwner^ theOther)
	: BaseClass<::SelectMgr_SequenceOfOwner>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::SelectMgr_SequenceOfOwner(*(::SelectMgr_SequenceOfOwner*)theOther->NativeInstance);
}

int Macad::Occt::SelectMgr_SequenceOfOwner::Size()
{
	return ((::SelectMgr_SequenceOfOwner*)_NativeInstance)->Size();
}

int Macad::Occt::SelectMgr_SequenceOfOwner::Length()
{
	return ((::SelectMgr_SequenceOfOwner*)_NativeInstance)->Length();
}

int Macad::Occt::SelectMgr_SequenceOfOwner::Lower()
{
	return ((::SelectMgr_SequenceOfOwner*)_NativeInstance)->Lower();
}

int Macad::Occt::SelectMgr_SequenceOfOwner::Upper()
{
	return ((::SelectMgr_SequenceOfOwner*)_NativeInstance)->Upper();
}

bool Macad::Occt::SelectMgr_SequenceOfOwner::IsEmpty()
{
	return ((::SelectMgr_SequenceOfOwner*)_NativeInstance)->IsEmpty();
}

void Macad::Occt::SelectMgr_SequenceOfOwner::Reverse()
{
	((::SelectMgr_SequenceOfOwner*)_NativeInstance)->Reverse();
}

void Macad::Occt::SelectMgr_SequenceOfOwner::Exchange(int I, int J)
{
	((::SelectMgr_SequenceOfOwner*)_NativeInstance)->Exchange(I, J);
}

void Macad::Occt::SelectMgr_SequenceOfOwner::Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
{
	Handle(::NCollection_BaseAllocator) h_theAllocator = theAllocator->NativeInstance;
	((::SelectMgr_SequenceOfOwner*)_NativeInstance)->Clear(h_theAllocator);
	theAllocator->NativeInstance = h_theAllocator.get();
}

void Macad::Occt::SelectMgr_SequenceOfOwner::Clear()
{
	((::SelectMgr_SequenceOfOwner*)_NativeInstance)->Clear(0L);
}

Macad::Occt::SelectMgr_SequenceOfOwner^ Macad::Occt::SelectMgr_SequenceOfOwner::Assign(Macad::Occt::SelectMgr_SequenceOfOwner^ theOther)
{
	::SelectMgr_SequenceOfOwner* _result = new ::SelectMgr_SequenceOfOwner();
	*_result = ((::SelectMgr_SequenceOfOwner*)_NativeInstance)->Assign(*(::SelectMgr_SequenceOfOwner*)theOther->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::SelectMgr_SequenceOfOwner(_result);
}

void Macad::Occt::SelectMgr_SequenceOfOwner::Remove(int theIndex)
{
	((::SelectMgr_SequenceOfOwner*)_NativeInstance)->Remove(theIndex);
}

void Macad::Occt::SelectMgr_SequenceOfOwner::Remove(int theFromIndex, int theToIndex)
{
	((::SelectMgr_SequenceOfOwner*)_NativeInstance)->Remove(theFromIndex, theToIndex);
}

void Macad::Occt::SelectMgr_SequenceOfOwner::Append(Macad::Occt::SelectMgr_EntityOwner^ theItem)
{
	Handle(::SelectMgr_EntityOwner) h_theItem = theItem->NativeInstance;
	((::SelectMgr_SequenceOfOwner*)_NativeInstance)->Append(h_theItem);
	theItem->NativeInstance = h_theItem.get();
}

void Macad::Occt::SelectMgr_SequenceOfOwner::Append(Macad::Occt::SelectMgr_SequenceOfOwner^ theSeq)
{
	((::SelectMgr_SequenceOfOwner*)_NativeInstance)->Append(*(::SelectMgr_SequenceOfOwner*)theSeq->NativeInstance);
}

void Macad::Occt::SelectMgr_SequenceOfOwner::Prepend(Macad::Occt::SelectMgr_EntityOwner^ theItem)
{
	Handle(::SelectMgr_EntityOwner) h_theItem = theItem->NativeInstance;
	((::SelectMgr_SequenceOfOwner*)_NativeInstance)->Prepend(h_theItem);
	theItem->NativeInstance = h_theItem.get();
}

void Macad::Occt::SelectMgr_SequenceOfOwner::Prepend(Macad::Occt::SelectMgr_SequenceOfOwner^ theSeq)
{
	((::SelectMgr_SequenceOfOwner*)_NativeInstance)->Prepend(*(::SelectMgr_SequenceOfOwner*)theSeq->NativeInstance);
}

void Macad::Occt::SelectMgr_SequenceOfOwner::InsertBefore(int theIndex, Macad::Occt::SelectMgr_EntityOwner^ theItem)
{
	Handle(::SelectMgr_EntityOwner) h_theItem = theItem->NativeInstance;
	((::SelectMgr_SequenceOfOwner*)_NativeInstance)->InsertBefore(theIndex, h_theItem);
	theItem->NativeInstance = h_theItem.get();
}

void Macad::Occt::SelectMgr_SequenceOfOwner::InsertBefore(int theIndex, Macad::Occt::SelectMgr_SequenceOfOwner^ theSeq)
{
	((::SelectMgr_SequenceOfOwner*)_NativeInstance)->InsertBefore(theIndex, *(::SelectMgr_SequenceOfOwner*)theSeq->NativeInstance);
}

void Macad::Occt::SelectMgr_SequenceOfOwner::InsertAfter(int theIndex, Macad::Occt::SelectMgr_SequenceOfOwner^ theSeq)
{
	((::SelectMgr_SequenceOfOwner*)_NativeInstance)->InsertAfter(theIndex, *(::SelectMgr_SequenceOfOwner*)theSeq->NativeInstance);
}

void Macad::Occt::SelectMgr_SequenceOfOwner::InsertAfter(int theIndex, Macad::Occt::SelectMgr_EntityOwner^ theItem)
{
	Handle(::SelectMgr_EntityOwner) h_theItem = theItem->NativeInstance;
	((::SelectMgr_SequenceOfOwner*)_NativeInstance)->InsertAfter(theIndex, h_theItem);
	theItem->NativeInstance = h_theItem.get();
}

void Macad::Occt::SelectMgr_SequenceOfOwner::Split(int theIndex, Macad::Occt::SelectMgr_SequenceOfOwner^ theSeq)
{
	((::SelectMgr_SequenceOfOwner*)_NativeInstance)->Split(theIndex, *(::SelectMgr_SequenceOfOwner*)theSeq->NativeInstance);
}

Macad::Occt::SelectMgr_EntityOwner^ Macad::Occt::SelectMgr_SequenceOfOwner::First()
{
	Handle(::SelectMgr_EntityOwner) _result;
	_result = ((::SelectMgr_SequenceOfOwner*)_NativeInstance)->First();
	 return _result.IsNull() ? nullptr : Macad::Occt::SelectMgr_EntityOwner::CreateDowncasted( _result.get());
}

Macad::Occt::SelectMgr_EntityOwner^ Macad::Occt::SelectMgr_SequenceOfOwner::ChangeFirst()
{
	Handle(::SelectMgr_EntityOwner) _result;
	_result = ((::SelectMgr_SequenceOfOwner*)_NativeInstance)->ChangeFirst();
	 return _result.IsNull() ? nullptr : Macad::Occt::SelectMgr_EntityOwner::CreateDowncasted( _result.get());
}

Macad::Occt::SelectMgr_EntityOwner^ Macad::Occt::SelectMgr_SequenceOfOwner::Last()
{
	Handle(::SelectMgr_EntityOwner) _result;
	_result = ((::SelectMgr_SequenceOfOwner*)_NativeInstance)->Last();
	 return _result.IsNull() ? nullptr : Macad::Occt::SelectMgr_EntityOwner::CreateDowncasted( _result.get());
}

Macad::Occt::SelectMgr_EntityOwner^ Macad::Occt::SelectMgr_SequenceOfOwner::ChangeLast()
{
	Handle(::SelectMgr_EntityOwner) _result;
	_result = ((::SelectMgr_SequenceOfOwner*)_NativeInstance)->ChangeLast();
	 return _result.IsNull() ? nullptr : Macad::Occt::SelectMgr_EntityOwner::CreateDowncasted( _result.get());
}

Macad::Occt::SelectMgr_EntityOwner^ Macad::Occt::SelectMgr_SequenceOfOwner::Value(int theIndex)
{
	Handle(::SelectMgr_EntityOwner) _result;
	_result = ((::SelectMgr_SequenceOfOwner*)_NativeInstance)->Value(theIndex);
	 return _result.IsNull() ? nullptr : Macad::Occt::SelectMgr_EntityOwner::CreateDowncasted( _result.get());
}

Macad::Occt::SelectMgr_EntityOwner^ Macad::Occt::SelectMgr_SequenceOfOwner::ChangeValue(int theIndex)
{
	Handle(::SelectMgr_EntityOwner) _result;
	_result = ((::SelectMgr_SequenceOfOwner*)_NativeInstance)->ChangeValue(theIndex);
	 return _result.IsNull() ? nullptr : Macad::Occt::SelectMgr_EntityOwner::CreateDowncasted( _result.get());
}

void Macad::Occt::SelectMgr_SequenceOfOwner::SetValue(int theIndex, Macad::Occt::SelectMgr_EntityOwner^ theItem)
{
	Handle(::SelectMgr_EntityOwner) h_theItem = theItem->NativeInstance;
	((::SelectMgr_SequenceOfOwner*)_NativeInstance)->SetValue(theIndex, h_theItem);
	theItem->NativeInstance = h_theItem.get();
}




//---------------------------------------------------------------------
//  Class  SelectMgr_IndexedDataMapOfOwnerCriterion
//---------------------------------------------------------------------

Macad::Occt::SelectMgr_IndexedDataMapOfOwnerCriterion::SelectMgr_IndexedDataMapOfOwnerCriterion()
	: BaseClass<::SelectMgr_IndexedDataMapOfOwnerCriterion>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::SelectMgr_IndexedDataMapOfOwnerCriterion();
}

Macad::Occt::SelectMgr_IndexedDataMapOfOwnerCriterion::SelectMgr_IndexedDataMapOfOwnerCriterion(int theNbBuckets, Macad::Occt::NCollection_BaseAllocator^ theAllocator)
	: BaseClass<::SelectMgr_IndexedDataMapOfOwnerCriterion>(BaseClass::InitMode::Uninitialized)
{
	Handle(::NCollection_BaseAllocator) h_theAllocator = theAllocator->NativeInstance;
	_NativeInstance = new ::SelectMgr_IndexedDataMapOfOwnerCriterion(theNbBuckets, h_theAllocator);
	theAllocator->NativeInstance = h_theAllocator.get();
}

Macad::Occt::SelectMgr_IndexedDataMapOfOwnerCriterion::SelectMgr_IndexedDataMapOfOwnerCriterion(int theNbBuckets)
	: BaseClass<::SelectMgr_IndexedDataMapOfOwnerCriterion>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::SelectMgr_IndexedDataMapOfOwnerCriterion(theNbBuckets, 0L);
}

Macad::Occt::SelectMgr_IndexedDataMapOfOwnerCriterion::SelectMgr_IndexedDataMapOfOwnerCriterion(Macad::Occt::SelectMgr_IndexedDataMapOfOwnerCriterion^ theOther)
	: BaseClass<::SelectMgr_IndexedDataMapOfOwnerCriterion>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::SelectMgr_IndexedDataMapOfOwnerCriterion(*(::SelectMgr_IndexedDataMapOfOwnerCriterion*)theOther->NativeInstance);
}

void Macad::Occt::SelectMgr_IndexedDataMapOfOwnerCriterion::Exchange(Macad::Occt::SelectMgr_IndexedDataMapOfOwnerCriterion^ theOther)
{
	((::SelectMgr_IndexedDataMapOfOwnerCriterion*)_NativeInstance)->Exchange(*(::SelectMgr_IndexedDataMapOfOwnerCriterion*)theOther->NativeInstance);
}

int Macad::Occt::SelectMgr_IndexedDataMapOfOwnerCriterion::Add(Macad::Occt::SelectMgr_EntityOwner^ theKey1, Macad::Occt::SelectMgr_SortCriterion^ theItem)
{
	Handle(::SelectMgr_EntityOwner) h_theKey1 = theKey1->NativeInstance;
	return ((::SelectMgr_IndexedDataMapOfOwnerCriterion*)_NativeInstance)->Add(h_theKey1, *(::SelectMgr_SortCriterion*)theItem->NativeInstance);
	theKey1->NativeInstance = h_theKey1.get();
}

bool Macad::Occt::SelectMgr_IndexedDataMapOfOwnerCriterion::Contains(Macad::Occt::SelectMgr_EntityOwner^ theKey1)
{
	Handle(::SelectMgr_EntityOwner) h_theKey1 = theKey1->NativeInstance;
	return ((::SelectMgr_IndexedDataMapOfOwnerCriterion*)_NativeInstance)->Contains(h_theKey1);
	theKey1->NativeInstance = h_theKey1.get();
}

void Macad::Occt::SelectMgr_IndexedDataMapOfOwnerCriterion::Substitute(int theIndex, Macad::Occt::SelectMgr_EntityOwner^ theKey1, Macad::Occt::SelectMgr_SortCriterion^ theItem)
{
	Handle(::SelectMgr_EntityOwner) h_theKey1 = theKey1->NativeInstance;
	((::SelectMgr_IndexedDataMapOfOwnerCriterion*)_NativeInstance)->Substitute(theIndex, h_theKey1, *(::SelectMgr_SortCriterion*)theItem->NativeInstance);
	theKey1->NativeInstance = h_theKey1.get();
}

void Macad::Occt::SelectMgr_IndexedDataMapOfOwnerCriterion::Swap(int theIndex1, int theIndex2)
{
	((::SelectMgr_IndexedDataMapOfOwnerCriterion*)_NativeInstance)->Swap(theIndex1, theIndex2);
}

void Macad::Occt::SelectMgr_IndexedDataMapOfOwnerCriterion::RemoveLast()
{
	((::SelectMgr_IndexedDataMapOfOwnerCriterion*)_NativeInstance)->RemoveLast();
}

void Macad::Occt::SelectMgr_IndexedDataMapOfOwnerCriterion::RemoveFromIndex(int theIndex)
{
	((::SelectMgr_IndexedDataMapOfOwnerCriterion*)_NativeInstance)->RemoveFromIndex(theIndex);
}

void Macad::Occt::SelectMgr_IndexedDataMapOfOwnerCriterion::RemoveKey(Macad::Occt::SelectMgr_EntityOwner^ theKey1)
{
	Handle(::SelectMgr_EntityOwner) h_theKey1 = theKey1->NativeInstance;
	((::SelectMgr_IndexedDataMapOfOwnerCriterion*)_NativeInstance)->RemoveKey(h_theKey1);
	theKey1->NativeInstance = h_theKey1.get();
}

Macad::Occt::SelectMgr_EntityOwner^ Macad::Occt::SelectMgr_IndexedDataMapOfOwnerCriterion::FindKey(int theIndex)
{
	Handle(::SelectMgr_EntityOwner) _result;
	_result = ((::SelectMgr_IndexedDataMapOfOwnerCriterion*)_NativeInstance)->FindKey(theIndex);
	 return _result.IsNull() ? nullptr : Macad::Occt::SelectMgr_EntityOwner::CreateDowncasted( _result.get());
}

Macad::Occt::SelectMgr_SortCriterion^ Macad::Occt::SelectMgr_IndexedDataMapOfOwnerCriterion::FindFromIndex(int theIndex)
{
	::SelectMgr_SortCriterion* _result = new ::SelectMgr_SortCriterion();
	*_result =  (::SelectMgr_SortCriterion)((::SelectMgr_IndexedDataMapOfOwnerCriterion*)_NativeInstance)->FindFromIndex(theIndex);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::SelectMgr_SortCriterion(_result);
}

Macad::Occt::SelectMgr_SortCriterion^ Macad::Occt::SelectMgr_IndexedDataMapOfOwnerCriterion::ChangeFromIndex(int theIndex)
{
	::SelectMgr_SortCriterion* _result = new ::SelectMgr_SortCriterion();
	*_result = ((::SelectMgr_IndexedDataMapOfOwnerCriterion*)_NativeInstance)->ChangeFromIndex(theIndex);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::SelectMgr_SortCriterion(_result);
}

int Macad::Occt::SelectMgr_IndexedDataMapOfOwnerCriterion::FindIndex(Macad::Occt::SelectMgr_EntityOwner^ theKey1)
{
	Handle(::SelectMgr_EntityOwner) h_theKey1 = theKey1->NativeInstance;
	return ((::SelectMgr_IndexedDataMapOfOwnerCriterion*)_NativeInstance)->FindIndex(h_theKey1);
	theKey1->NativeInstance = h_theKey1.get();
}

Macad::Occt::SelectMgr_SortCriterion^ Macad::Occt::SelectMgr_IndexedDataMapOfOwnerCriterion::FindFromKey(Macad::Occt::SelectMgr_EntityOwner^ theKey1)
{
	Handle(::SelectMgr_EntityOwner) h_theKey1 = theKey1->NativeInstance;
	::SelectMgr_SortCriterion* _result = new ::SelectMgr_SortCriterion();
	*_result =  (::SelectMgr_SortCriterion)((::SelectMgr_IndexedDataMapOfOwnerCriterion*)_NativeInstance)->FindFromKey(h_theKey1);
	theKey1->NativeInstance = h_theKey1.get();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::SelectMgr_SortCriterion(_result);
}

Macad::Occt::SelectMgr_SortCriterion^ Macad::Occt::SelectMgr_IndexedDataMapOfOwnerCriterion::ChangeFromKey(Macad::Occt::SelectMgr_EntityOwner^ theKey1)
{
	Handle(::SelectMgr_EntityOwner) h_theKey1 = theKey1->NativeInstance;
	::SelectMgr_SortCriterion* _result = new ::SelectMgr_SortCriterion();
	*_result = ((::SelectMgr_IndexedDataMapOfOwnerCriterion*)_NativeInstance)->ChangeFromKey(h_theKey1);
	theKey1->NativeInstance = h_theKey1.get();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::SelectMgr_SortCriterion(_result);
}

Macad::Occt::SelectMgr_SortCriterion^ Macad::Occt::SelectMgr_IndexedDataMapOfOwnerCriterion::Seek(Macad::Occt::SelectMgr_EntityOwner^ theKey1)
{
	Handle(::SelectMgr_EntityOwner) h_theKey1 = theKey1->NativeInstance;
	::SelectMgr_SortCriterion* _result;
	_result = (::SelectMgr_SortCriterion*)((::SelectMgr_IndexedDataMapOfOwnerCriterion*)_NativeInstance)->Seek(h_theKey1);
	theKey1->NativeInstance = h_theKey1.get();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::SelectMgr_SortCriterion(_result);
}

Macad::Occt::SelectMgr_SortCriterion^ Macad::Occt::SelectMgr_IndexedDataMapOfOwnerCriterion::ChangeSeek(Macad::Occt::SelectMgr_EntityOwner^ theKey1)
{
	Handle(::SelectMgr_EntityOwner) h_theKey1 = theKey1->NativeInstance;
	::SelectMgr_SortCriterion* _result;
	_result = (::SelectMgr_SortCriterion*)((::SelectMgr_IndexedDataMapOfOwnerCriterion*)_NativeInstance)->ChangeSeek(h_theKey1);
	theKey1->NativeInstance = h_theKey1.get();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::SelectMgr_SortCriterion(_result);
}

bool Macad::Occt::SelectMgr_IndexedDataMapOfOwnerCriterion::FindFromKey(Macad::Occt::SelectMgr_EntityOwner^ theKey1, Macad::Occt::SelectMgr_SortCriterion^ theValue)
{
	Handle(::SelectMgr_EntityOwner) h_theKey1 = theKey1->NativeInstance;
	return ((::SelectMgr_IndexedDataMapOfOwnerCriterion*)_NativeInstance)->FindFromKey(h_theKey1, *(::SelectMgr_SortCriterion*)theValue->NativeInstance);
	theKey1->NativeInstance = h_theKey1.get();
}

void Macad::Occt::SelectMgr_IndexedDataMapOfOwnerCriterion::Clear(bool doReleaseMemory)
{
	((::SelectMgr_IndexedDataMapOfOwnerCriterion*)_NativeInstance)->Clear(doReleaseMemory);
}

void Macad::Occt::SelectMgr_IndexedDataMapOfOwnerCriterion::Clear()
{
	((::SelectMgr_IndexedDataMapOfOwnerCriterion*)_NativeInstance)->Clear(true);
}

void Macad::Occt::SelectMgr_IndexedDataMapOfOwnerCriterion::Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
{
	Handle(::NCollection_BaseAllocator) h_theAllocator = theAllocator->NativeInstance;
	((::SelectMgr_IndexedDataMapOfOwnerCriterion*)_NativeInstance)->Clear(h_theAllocator);
	theAllocator->NativeInstance = h_theAllocator.get();
}

int Macad::Occt::SelectMgr_IndexedDataMapOfOwnerCriterion::Size()
{
	return ((::SelectMgr_IndexedDataMapOfOwnerCriterion*)_NativeInstance)->Size();
}




//---------------------------------------------------------------------
//  Class  SelectMgr_MapOfObjectSensitives
//---------------------------------------------------------------------

Macad::Occt::SelectMgr_MapOfObjectSensitives::SelectMgr_MapOfObjectSensitives()
	: BaseClass<::SelectMgr_MapOfObjectSensitives>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::SelectMgr_MapOfObjectSensitives();
}

Macad::Occt::SelectMgr_MapOfObjectSensitives::SelectMgr_MapOfObjectSensitives(int theNbBuckets, Macad::Occt::NCollection_BaseAllocator^ theAllocator)
	: BaseClass<::SelectMgr_MapOfObjectSensitives>(BaseClass::InitMode::Uninitialized)
{
	Handle(::NCollection_BaseAllocator) h_theAllocator = theAllocator->NativeInstance;
	_NativeInstance = new ::SelectMgr_MapOfObjectSensitives(theNbBuckets, h_theAllocator);
	theAllocator->NativeInstance = h_theAllocator.get();
}

Macad::Occt::SelectMgr_MapOfObjectSensitives::SelectMgr_MapOfObjectSensitives(int theNbBuckets)
	: BaseClass<::SelectMgr_MapOfObjectSensitives>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::SelectMgr_MapOfObjectSensitives(theNbBuckets, 0L);
}

Macad::Occt::SelectMgr_MapOfObjectSensitives::SelectMgr_MapOfObjectSensitives(Macad::Occt::SelectMgr_MapOfObjectSensitives^ theOther)
	: BaseClass<::SelectMgr_MapOfObjectSensitives>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::SelectMgr_MapOfObjectSensitives(*(::SelectMgr_MapOfObjectSensitives*)theOther->NativeInstance);
}

void Macad::Occt::SelectMgr_MapOfObjectSensitives::Exchange(Macad::Occt::SelectMgr_MapOfObjectSensitives^ theOther)
{
	((::SelectMgr_MapOfObjectSensitives*)_NativeInstance)->Exchange(*(::SelectMgr_MapOfObjectSensitives*)theOther->NativeInstance);
}

Macad::Occt::SelectMgr_MapOfObjectSensitives^ Macad::Occt::SelectMgr_MapOfObjectSensitives::Assign(Macad::Occt::SelectMgr_MapOfObjectSensitives^ theOther)
{
	::SelectMgr_MapOfObjectSensitives* _result = new ::SelectMgr_MapOfObjectSensitives();
	*_result = ((::SelectMgr_MapOfObjectSensitives*)_NativeInstance)->Assign(*(::SelectMgr_MapOfObjectSensitives*)theOther->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::SelectMgr_MapOfObjectSensitives(_result);
}

bool Macad::Occt::SelectMgr_MapOfObjectSensitives::IsBound(Macad::Occt::SelectMgr_SelectableObject^ theKey)
{
	Handle(::SelectMgr_SelectableObject) h_theKey = theKey->NativeInstance;
	return ((::SelectMgr_MapOfObjectSensitives*)_NativeInstance)->IsBound(h_theKey);
	theKey->NativeInstance = h_theKey.get();
}

bool Macad::Occt::SelectMgr_MapOfObjectSensitives::UnBind(Macad::Occt::SelectMgr_SelectableObject^ theKey)
{
	Handle(::SelectMgr_SelectableObject) h_theKey = theKey->NativeInstance;
	return ((::SelectMgr_MapOfObjectSensitives*)_NativeInstance)->UnBind(h_theKey);
	theKey->NativeInstance = h_theKey.get();
}

void Macad::Occt::SelectMgr_MapOfObjectSensitives::Clear(bool doReleaseMemory)
{
	((::SelectMgr_MapOfObjectSensitives*)_NativeInstance)->Clear(doReleaseMemory);
}

void Macad::Occt::SelectMgr_MapOfObjectSensitives::Clear()
{
	((::SelectMgr_MapOfObjectSensitives*)_NativeInstance)->Clear(true);
}

void Macad::Occt::SelectMgr_MapOfObjectSensitives::Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
{
	Handle(::NCollection_BaseAllocator) h_theAllocator = theAllocator->NativeInstance;
	((::SelectMgr_MapOfObjectSensitives*)_NativeInstance)->Clear(h_theAllocator);
	theAllocator->NativeInstance = h_theAllocator.get();
}

int Macad::Occt::SelectMgr_MapOfObjectSensitives::Size()
{
	return ((::SelectMgr_MapOfObjectSensitives*)_NativeInstance)->Size();
}




//---------------------------------------------------------------------
//  Class  SelectMgr_FrustumCache
//---------------------------------------------------------------------

Macad::Occt::SelectMgr_FrustumCache::SelectMgr_FrustumCache()
	: BaseClass<::SelectMgr_FrustumCache>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::SelectMgr_FrustumCache();
}

Macad::Occt::SelectMgr_FrustumCache::SelectMgr_FrustumCache(int theNbBuckets, Macad::Occt::NCollection_BaseAllocator^ theAllocator)
	: BaseClass<::SelectMgr_FrustumCache>(BaseClass::InitMode::Uninitialized)
{
	Handle(::NCollection_BaseAllocator) h_theAllocator = theAllocator->NativeInstance;
	_NativeInstance = new ::SelectMgr_FrustumCache(theNbBuckets, h_theAllocator);
	theAllocator->NativeInstance = h_theAllocator.get();
}

Macad::Occt::SelectMgr_FrustumCache::SelectMgr_FrustumCache(int theNbBuckets)
	: BaseClass<::SelectMgr_FrustumCache>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::SelectMgr_FrustumCache(theNbBuckets, 0L);
}

Macad::Occt::SelectMgr_FrustumCache::SelectMgr_FrustumCache(Macad::Occt::SelectMgr_FrustumCache^ theOther)
	: BaseClass<::SelectMgr_FrustumCache>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::SelectMgr_FrustumCache(*(::SelectMgr_FrustumCache*)theOther->NativeInstance);
}

void Macad::Occt::SelectMgr_FrustumCache::Exchange(Macad::Occt::SelectMgr_FrustumCache^ theOther)
{
	((::SelectMgr_FrustumCache*)_NativeInstance)->Exchange(*(::SelectMgr_FrustumCache*)theOther->NativeInstance);
}

Macad::Occt::SelectMgr_FrustumCache^ Macad::Occt::SelectMgr_FrustumCache::Assign(Macad::Occt::SelectMgr_FrustumCache^ theOther)
{
	::SelectMgr_FrustumCache* _result = new ::SelectMgr_FrustumCache();
	*_result = ((::SelectMgr_FrustumCache*)_NativeInstance)->Assign(*(::SelectMgr_FrustumCache*)theOther->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::SelectMgr_FrustumCache(_result);
}

bool Macad::Occt::SelectMgr_FrustumCache::IsBound(int theKey)
{
	pin_ptr<int> pp_theKey = &theKey;
	return ((::SelectMgr_FrustumCache*)_NativeInstance)->IsBound(*(int*)pp_theKey);
}

bool Macad::Occt::SelectMgr_FrustumCache::UnBind(int theKey)
{
	pin_ptr<int> pp_theKey = &theKey;
	return ((::SelectMgr_FrustumCache*)_NativeInstance)->UnBind(*(int*)pp_theKey);
}

void Macad::Occt::SelectMgr_FrustumCache::Clear(bool doReleaseMemory)
{
	((::SelectMgr_FrustumCache*)_NativeInstance)->Clear(doReleaseMemory);
}

void Macad::Occt::SelectMgr_FrustumCache::Clear()
{
	((::SelectMgr_FrustumCache*)_NativeInstance)->Clear(true);
}

void Macad::Occt::SelectMgr_FrustumCache::Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
{
	Handle(::NCollection_BaseAllocator) h_theAllocator = theAllocator->NativeInstance;
	((::SelectMgr_FrustumCache*)_NativeInstance)->Clear(h_theAllocator);
	theAllocator->NativeInstance = h_theAllocator.get();
}

int Macad::Occt::SelectMgr_FrustumCache::Size()
{
	return ((::SelectMgr_FrustumCache*)_NativeInstance)->Size();
}




//---------------------------------------------------------------------
//  Class  SelectMgr_IndexedMapOfHSensitive
//---------------------------------------------------------------------

Macad::Occt::SelectMgr_IndexedMapOfHSensitive::SelectMgr_IndexedMapOfHSensitive()
	: BaseClass<::SelectMgr_IndexedMapOfHSensitive>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::SelectMgr_IndexedMapOfHSensitive();
}

Macad::Occt::SelectMgr_IndexedMapOfHSensitive::SelectMgr_IndexedMapOfHSensitive(int theNbBuckets, Macad::Occt::NCollection_BaseAllocator^ theAllocator)
	: BaseClass<::SelectMgr_IndexedMapOfHSensitive>(BaseClass::InitMode::Uninitialized)
{
	Handle(::NCollection_BaseAllocator) h_theAllocator = theAllocator->NativeInstance;
	_NativeInstance = new ::SelectMgr_IndexedMapOfHSensitive(theNbBuckets, h_theAllocator);
	theAllocator->NativeInstance = h_theAllocator.get();
}

Macad::Occt::SelectMgr_IndexedMapOfHSensitive::SelectMgr_IndexedMapOfHSensitive(int theNbBuckets)
	: BaseClass<::SelectMgr_IndexedMapOfHSensitive>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::SelectMgr_IndexedMapOfHSensitive(theNbBuckets, 0L);
}

Macad::Occt::SelectMgr_IndexedMapOfHSensitive::SelectMgr_IndexedMapOfHSensitive(Macad::Occt::SelectMgr_IndexedMapOfHSensitive^ theOther)
	: BaseClass<::SelectMgr_IndexedMapOfHSensitive>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::SelectMgr_IndexedMapOfHSensitive(*(::SelectMgr_IndexedMapOfHSensitive*)theOther->NativeInstance);
}

void Macad::Occt::SelectMgr_IndexedMapOfHSensitive::Exchange(Macad::Occt::SelectMgr_IndexedMapOfHSensitive^ theOther)
{
	((::SelectMgr_IndexedMapOfHSensitive*)_NativeInstance)->Exchange(*(::SelectMgr_IndexedMapOfHSensitive*)theOther->NativeInstance);
}

int Macad::Occt::SelectMgr_IndexedMapOfHSensitive::Add(Macad::Occt::SelectMgr_SensitiveEntity^ theKey1)
{
	Handle(::SelectMgr_SensitiveEntity) h_theKey1 = theKey1->NativeInstance;
	return ((::SelectMgr_IndexedMapOfHSensitive*)_NativeInstance)->Add(h_theKey1);
	theKey1->NativeInstance = h_theKey1.get();
}

bool Macad::Occt::SelectMgr_IndexedMapOfHSensitive::Contains(Macad::Occt::SelectMgr_SensitiveEntity^ theKey1)
{
	Handle(::SelectMgr_SensitiveEntity) h_theKey1 = theKey1->NativeInstance;
	return ((::SelectMgr_IndexedMapOfHSensitive*)_NativeInstance)->Contains(h_theKey1);
	theKey1->NativeInstance = h_theKey1.get();
}

void Macad::Occt::SelectMgr_IndexedMapOfHSensitive::Substitute(int theIndex, Macad::Occt::SelectMgr_SensitiveEntity^ theKey1)
{
	Handle(::SelectMgr_SensitiveEntity) h_theKey1 = theKey1->NativeInstance;
	((::SelectMgr_IndexedMapOfHSensitive*)_NativeInstance)->Substitute(theIndex, h_theKey1);
	theKey1->NativeInstance = h_theKey1.get();
}

void Macad::Occt::SelectMgr_IndexedMapOfHSensitive::Swap(int theIndex1, int theIndex2)
{
	((::SelectMgr_IndexedMapOfHSensitive*)_NativeInstance)->Swap(theIndex1, theIndex2);
}

void Macad::Occt::SelectMgr_IndexedMapOfHSensitive::RemoveLast()
{
	((::SelectMgr_IndexedMapOfHSensitive*)_NativeInstance)->RemoveLast();
}

void Macad::Occt::SelectMgr_IndexedMapOfHSensitive::RemoveFromIndex(int theIndex)
{
	((::SelectMgr_IndexedMapOfHSensitive*)_NativeInstance)->RemoveFromIndex(theIndex);
}

bool Macad::Occt::SelectMgr_IndexedMapOfHSensitive::RemoveKey(Macad::Occt::SelectMgr_SensitiveEntity^ theKey1)
{
	Handle(::SelectMgr_SensitiveEntity) h_theKey1 = theKey1->NativeInstance;
	return ((::SelectMgr_IndexedMapOfHSensitive*)_NativeInstance)->RemoveKey(h_theKey1);
	theKey1->NativeInstance = h_theKey1.get();
}

Macad::Occt::SelectMgr_SensitiveEntity^ Macad::Occt::SelectMgr_IndexedMapOfHSensitive::FindKey(int theIndex)
{
	Handle(::SelectMgr_SensitiveEntity) _result;
	_result = ((::SelectMgr_IndexedMapOfHSensitive*)_NativeInstance)->FindKey(theIndex);
	 return _result.IsNull() ? nullptr : Macad::Occt::SelectMgr_SensitiveEntity::CreateDowncasted( _result.get());
}

int Macad::Occt::SelectMgr_IndexedMapOfHSensitive::FindIndex(Macad::Occt::SelectMgr_SensitiveEntity^ theKey1)
{
	Handle(::SelectMgr_SensitiveEntity) h_theKey1 = theKey1->NativeInstance;
	return ((::SelectMgr_IndexedMapOfHSensitive*)_NativeInstance)->FindIndex(h_theKey1);
	theKey1->NativeInstance = h_theKey1.get();
}

void Macad::Occt::SelectMgr_IndexedMapOfHSensitive::Clear(bool doReleaseMemory)
{
	((::SelectMgr_IndexedMapOfHSensitive*)_NativeInstance)->Clear(doReleaseMemory);
}

void Macad::Occt::SelectMgr_IndexedMapOfHSensitive::Clear()
{
	((::SelectMgr_IndexedMapOfHSensitive*)_NativeInstance)->Clear(true);
}

void Macad::Occt::SelectMgr_IndexedMapOfHSensitive::Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
{
	Handle(::NCollection_BaseAllocator) h_theAllocator = theAllocator->NativeInstance;
	((::SelectMgr_IndexedMapOfHSensitive*)_NativeInstance)->Clear(h_theAllocator);
	theAllocator->NativeInstance = h_theAllocator.get();
}

int Macad::Occt::SelectMgr_IndexedMapOfHSensitive::Size()
{
	return ((::SelectMgr_IndexedMapOfHSensitive*)_NativeInstance)->Size();
}




//---------------------------------------------------------------------
//  Class  SelectMgr_MapOfOwners
//---------------------------------------------------------------------

Macad::Occt::SelectMgr_MapOfOwners::SelectMgr_MapOfOwners()
	: BaseClass<::SelectMgr_MapOfOwners>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::SelectMgr_MapOfOwners();
}

Macad::Occt::SelectMgr_MapOfOwners::SelectMgr_MapOfOwners(int theNbBuckets, Macad::Occt::NCollection_BaseAllocator^ theAllocator)
	: BaseClass<::SelectMgr_MapOfOwners>(BaseClass::InitMode::Uninitialized)
{
	Handle(::NCollection_BaseAllocator) h_theAllocator = theAllocator->NativeInstance;
	_NativeInstance = new ::SelectMgr_MapOfOwners(theNbBuckets, h_theAllocator);
	theAllocator->NativeInstance = h_theAllocator.get();
}

Macad::Occt::SelectMgr_MapOfOwners::SelectMgr_MapOfOwners(int theNbBuckets)
	: BaseClass<::SelectMgr_MapOfOwners>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::SelectMgr_MapOfOwners(theNbBuckets, 0L);
}

Macad::Occt::SelectMgr_MapOfOwners::SelectMgr_MapOfOwners(Macad::Occt::SelectMgr_MapOfOwners^ theOther)
	: BaseClass<::SelectMgr_MapOfOwners>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::SelectMgr_MapOfOwners(*(::SelectMgr_MapOfOwners*)theOther->NativeInstance);
}

void Macad::Occt::SelectMgr_MapOfOwners::Exchange(Macad::Occt::SelectMgr_MapOfOwners^ theOther)
{
	((::SelectMgr_MapOfOwners*)_NativeInstance)->Exchange(*(::SelectMgr_MapOfOwners*)theOther->NativeInstance);
}

Macad::Occt::SelectMgr_MapOfOwners^ Macad::Occt::SelectMgr_MapOfOwners::Assign(Macad::Occt::SelectMgr_MapOfOwners^ theOther)
{
	::SelectMgr_MapOfOwners* _result = new ::SelectMgr_MapOfOwners();
	*_result = ((::SelectMgr_MapOfOwners*)_NativeInstance)->Assign(*(::SelectMgr_MapOfOwners*)theOther->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::SelectMgr_MapOfOwners(_result);
}

int Macad::Occt::SelectMgr_MapOfOwners::Bound(Macad::Occt::SelectMgr_EntityOwner^ theKey, int theItem)
{
	throw gcnew System::NotImplementedException("Native class returns pointer to integer/double/handle.");
}

bool Macad::Occt::SelectMgr_MapOfOwners::IsBound(Macad::Occt::SelectMgr_EntityOwner^ theKey)
{
	Handle(::SelectMgr_EntityOwner) h_theKey = theKey->NativeInstance;
	return ((::SelectMgr_MapOfOwners*)_NativeInstance)->IsBound(h_theKey);
	theKey->NativeInstance = h_theKey.get();
}

bool Macad::Occt::SelectMgr_MapOfOwners::UnBind(Macad::Occt::SelectMgr_EntityOwner^ theKey)
{
	Handle(::SelectMgr_EntityOwner) h_theKey = theKey->NativeInstance;
	return ((::SelectMgr_MapOfOwners*)_NativeInstance)->UnBind(h_theKey);
	theKey->NativeInstance = h_theKey.get();
}

int Macad::Occt::SelectMgr_MapOfOwners::Seek(Macad::Occt::SelectMgr_EntityOwner^ theKey)
{
	throw gcnew System::NotImplementedException("Native class returns pointer to integer/double/handle.");
}

int Macad::Occt::SelectMgr_MapOfOwners::Find(Macad::Occt::SelectMgr_EntityOwner^ theKey)
{
	Handle(::SelectMgr_EntityOwner) h_theKey = theKey->NativeInstance;
	return ((::SelectMgr_MapOfOwners*)_NativeInstance)->Find(h_theKey);
	theKey->NativeInstance = h_theKey.get();
}

bool Macad::Occt::SelectMgr_MapOfOwners::Find(Macad::Occt::SelectMgr_EntityOwner^ theKey, int% theValue)
{
	Handle(::SelectMgr_EntityOwner) h_theKey = theKey->NativeInstance;
	pin_ptr<int> pp_theValue = &theValue;
	return ((::SelectMgr_MapOfOwners*)_NativeInstance)->Find(h_theKey, *(int*)pp_theValue);
	theKey->NativeInstance = h_theKey.get();
}

int Macad::Occt::SelectMgr_MapOfOwners::ChangeSeek(Macad::Occt::SelectMgr_EntityOwner^ theKey)
{
	throw gcnew System::NotImplementedException("Native class returns pointer to integer/double/handle.");
}

int Macad::Occt::SelectMgr_MapOfOwners::ChangeFind(Macad::Occt::SelectMgr_EntityOwner^ theKey)
{
	Handle(::SelectMgr_EntityOwner) h_theKey = theKey->NativeInstance;
	return ((::SelectMgr_MapOfOwners*)_NativeInstance)->ChangeFind(h_theKey);
	theKey->NativeInstance = h_theKey.get();
}

void Macad::Occt::SelectMgr_MapOfOwners::Clear(bool doReleaseMemory)
{
	((::SelectMgr_MapOfOwners*)_NativeInstance)->Clear(doReleaseMemory);
}

void Macad::Occt::SelectMgr_MapOfOwners::Clear()
{
	((::SelectMgr_MapOfOwners*)_NativeInstance)->Clear(true);
}

void Macad::Occt::SelectMgr_MapOfOwners::Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
{
	Handle(::NCollection_BaseAllocator) h_theAllocator = theAllocator->NativeInstance;
	((::SelectMgr_MapOfOwners*)_NativeInstance)->Clear(h_theAllocator);
	theAllocator->NativeInstance = h_theAllocator.get();
}

int Macad::Occt::SelectMgr_MapOfOwners::Size()
{
	return ((::SelectMgr_MapOfOwners*)_NativeInstance)->Size();
}




//---------------------------------------------------------------------
//  Class  SelectMgr_TriangFrustums
//---------------------------------------------------------------------

Macad::Occt::SelectMgr_TriangFrustums::SelectMgr_TriangFrustums()
	: BaseClass<::SelectMgr_TriangFrustums>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::SelectMgr_TriangFrustums();
}

Macad::Occt::SelectMgr_TriangFrustums::SelectMgr_TriangFrustums(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
	: BaseClass<::SelectMgr_TriangFrustums>(BaseClass::InitMode::Uninitialized)
{
	Handle(::NCollection_BaseAllocator) h_theAllocator = theAllocator->NativeInstance;
	_NativeInstance = new ::SelectMgr_TriangFrustums(h_theAllocator);
	theAllocator->NativeInstance = h_theAllocator.get();
}

Macad::Occt::SelectMgr_TriangFrustums::SelectMgr_TriangFrustums(Macad::Occt::SelectMgr_TriangFrustums^ theOther)
	: BaseClass<::SelectMgr_TriangFrustums>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::SelectMgr_TriangFrustums(*(::SelectMgr_TriangFrustums*)theOther->NativeInstance);
}

int Macad::Occt::SelectMgr_TriangFrustums::Size()
{
	return ((::SelectMgr_TriangFrustums*)_NativeInstance)->Size();
}

Macad::Occt::SelectMgr_TriangFrustums^ Macad::Occt::SelectMgr_TriangFrustums::Assign(Macad::Occt::SelectMgr_TriangFrustums^ theOther)
{
	::SelectMgr_TriangFrustums* _result = new ::SelectMgr_TriangFrustums();
	*_result = ((::SelectMgr_TriangFrustums*)_NativeInstance)->Assign(*(::SelectMgr_TriangFrustums*)theOther->NativeInstance);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::SelectMgr_TriangFrustums(_result);
}

void Macad::Occt::SelectMgr_TriangFrustums::Clear(Macad::Occt::NCollection_BaseAllocator^ theAllocator)
{
	Handle(::NCollection_BaseAllocator) h_theAllocator = theAllocator->NativeInstance;
	((::SelectMgr_TriangFrustums*)_NativeInstance)->Clear(h_theAllocator);
	theAllocator->NativeInstance = h_theAllocator.get();
}

void Macad::Occt::SelectMgr_TriangFrustums::Clear()
{
	((::SelectMgr_TriangFrustums*)_NativeInstance)->Clear(0L);
}

void Macad::Occt::SelectMgr_TriangFrustums::Append(Macad::Occt::SelectMgr_TriangFrustums^ theOther)
{
	((::SelectMgr_TriangFrustums*)_NativeInstance)->Append(*(::SelectMgr_TriangFrustums*)theOther->NativeInstance);
}

void Macad::Occt::SelectMgr_TriangFrustums::Prepend(Macad::Occt::SelectMgr_TriangFrustums^ theOther)
{
	((::SelectMgr_TriangFrustums*)_NativeInstance)->Prepend(*(::SelectMgr_TriangFrustums*)theOther->NativeInstance);
}

void Macad::Occt::SelectMgr_TriangFrustums::RemoveFirst()
{
	((::SelectMgr_TriangFrustums*)_NativeInstance)->RemoveFirst();
}

void Macad::Occt::SelectMgr_TriangFrustums::Reverse()
{
	((::SelectMgr_TriangFrustums*)_NativeInstance)->Reverse();
}




//---------------------------------------------------------------------
//  Class  SelectMgr_Selection
//---------------------------------------------------------------------

Macad::Occt::SelectMgr_Selection::SelectMgr_Selection(int theModeIdx)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::SelectMgr_Selection(theModeIdx);
}

Macad::Occt::SelectMgr_Selection::SelectMgr_Selection(Macad::Occt::SelectMgr_Selection^ parameter1)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::SelectMgr_Selection(*(::SelectMgr_Selection*)parameter1->NativeInstance);
}

void Macad::Occt::SelectMgr_Selection::Destroy()
{
	((::SelectMgr_Selection*)_NativeInstance)->Destroy();
}

void Macad::Occt::SelectMgr_Selection::Clear()
{
	((::SelectMgr_Selection*)_NativeInstance)->Clear();
}

bool Macad::Occt::SelectMgr_Selection::IsEmpty()
{
	return ((::SelectMgr_Selection*)_NativeInstance)->IsEmpty();
}

int Macad::Occt::SelectMgr_Selection::Mode()
{
	return ((::SelectMgr_Selection*)_NativeInstance)->Mode();
}

Macad::Occt::SelectMgr_TypeOfUpdate Macad::Occt::SelectMgr_Selection::UpdateStatus()
{
	return (Macad::Occt::SelectMgr_TypeOfUpdate)((::SelectMgr_Selection*)_NativeInstance)->UpdateStatus();
}

void Macad::Occt::SelectMgr_Selection::UpdateStatus(Macad::Occt::SelectMgr_TypeOfUpdate theStatus)
{
	((::SelectMgr_Selection*)_NativeInstance)->UpdateStatus((::SelectMgr_TypeOfUpdate)theStatus);
}

void Macad::Occt::SelectMgr_Selection::UpdateBVHStatus(Macad::Occt::SelectMgr_TypeOfBVHUpdate theStatus)
{
	((::SelectMgr_Selection*)_NativeInstance)->UpdateBVHStatus((::SelectMgr_TypeOfBVHUpdate)theStatus);
}

Macad::Occt::SelectMgr_TypeOfBVHUpdate Macad::Occt::SelectMgr_Selection::BVHUpdateStatus()
{
	return (Macad::Occt::SelectMgr_TypeOfBVHUpdate)((::SelectMgr_Selection*)_NativeInstance)->BVHUpdateStatus();
}

Macad::Occt::SelectMgr_StateOfSelection Macad::Occt::SelectMgr_Selection::GetSelectionState()
{
	return (Macad::Occt::SelectMgr_StateOfSelection)((::SelectMgr_Selection*)_NativeInstance)->GetSelectionState();
}

void Macad::Occt::SelectMgr_Selection::SetSelectionState(Macad::Occt::SelectMgr_StateOfSelection theState)
{
	((::SelectMgr_Selection*)_NativeInstance)->SetSelectionState((::SelectMgr_StateOfSelection)theState);
}

int Macad::Occt::SelectMgr_Selection::Sensitivity()
{
	return ((::SelectMgr_Selection*)_NativeInstance)->Sensitivity();
}

void Macad::Occt::SelectMgr_Selection::SetSensitivity(int theNewSens)
{
	((::SelectMgr_Selection*)_NativeInstance)->SetSensitivity(theNewSens);
}


Macad::Occt::SelectMgr_Selection^ Macad::Occt::SelectMgr_Selection::CreateDowncasted(::SelectMgr_Selection* instance)
{
	return gcnew Macad::Occt::SelectMgr_Selection( instance );
}



//---------------------------------------------------------------------
//  Class  SelectMgr
//---------------------------------------------------------------------

Macad::Occt::SelectMgr::SelectMgr()
	: BaseClass<::SelectMgr>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::SelectMgr();
}

Macad::Occt::SelectMgr::SelectMgr(Macad::Occt::SelectMgr^ parameter1)
	: BaseClass<::SelectMgr>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::SelectMgr(*(::SelectMgr*)parameter1->NativeInstance);
}

void Macad::Occt::SelectMgr::ComputeSensitivePrs(Macad::Occt::Graphic3d_Structure^ theStructure, Macad::Occt::SelectMgr_Selection^ theSel, Macad::Occt::Trsf theLoc, Macad::Occt::Graphic3d_TransformPers^ theTrsfPers)
{
	Handle(::Graphic3d_Structure) h_theStructure = theStructure->NativeInstance;
	Handle(::SelectMgr_Selection) h_theSel = theSel->NativeInstance;
	pin_ptr<Macad::Occt::Trsf> pp_theLoc = &theLoc;
	Handle(::Graphic3d_TransformPers) h_theTrsfPers = theTrsfPers->NativeInstance;
	::SelectMgr::ComputeSensitivePrs(h_theStructure, h_theSel, *(gp_Trsf*)pp_theLoc, h_theTrsfPers);
	theStructure->NativeInstance = h_theStructure.get();
	theSel->NativeInstance = h_theSel.get();
	theTrsfPers->NativeInstance = h_theTrsfPers.get();
}




//---------------------------------------------------------------------
//  Class  SelectMgr_EntityOwner
//---------------------------------------------------------------------

Macad::Occt::SelectMgr_EntityOwner::SelectMgr_EntityOwner(int aPriority)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::SelectMgr_EntityOwner(aPriority);
}

Macad::Occt::SelectMgr_EntityOwner::SelectMgr_EntityOwner(Macad::Occt::SelectMgr_SelectableObject^ aSO, int aPriority)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	Handle(::SelectMgr_SelectableObject) h_aSO = aSO->NativeInstance;
	NativeInstance = new ::SelectMgr_EntityOwner(h_aSO, aPriority);
	aSO->NativeInstance = h_aSO.get();
}

Macad::Occt::SelectMgr_EntityOwner::SelectMgr_EntityOwner(Macad::Occt::SelectMgr_SelectableObject^ aSO)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	Handle(::SelectMgr_SelectableObject) h_aSO = aSO->NativeInstance;
	NativeInstance = new ::SelectMgr_EntityOwner(h_aSO, 0);
	aSO->NativeInstance = h_aSO.get();
}

Macad::Occt::SelectMgr_EntityOwner::SelectMgr_EntityOwner(Macad::Occt::SelectMgr_EntityOwner^ theOwner, int aPriority)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	Handle(::SelectMgr_EntityOwner) h_theOwner = theOwner->NativeInstance;
	NativeInstance = new ::SelectMgr_EntityOwner(h_theOwner, aPriority);
	theOwner->NativeInstance = h_theOwner.get();
}

Macad::Occt::SelectMgr_EntityOwner::SelectMgr_EntityOwner(Macad::Occt::SelectMgr_EntityOwner^ parameter1)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::SelectMgr_EntityOwner(*(::SelectMgr_EntityOwner*)parameter1->NativeInstance);
}

int Macad::Occt::SelectMgr_EntityOwner::Priority()
{
	return ((::SelectMgr_EntityOwner*)_NativeInstance)->Priority();
}

void Macad::Occt::SelectMgr_EntityOwner::SetPriority(int thePriority)
{
	((::SelectMgr_EntityOwner*)_NativeInstance)->SetPriority(thePriority);
}

bool Macad::Occt::SelectMgr_EntityOwner::HasSelectable()
{
	return ((::SelectMgr_EntityOwner*)_NativeInstance)->HasSelectable();
}

Macad::Occt::SelectMgr_SelectableObject^ Macad::Occt::SelectMgr_EntityOwner::Selectable()
{
	Handle(::SelectMgr_SelectableObject) _result;
	_result = ((::SelectMgr_EntityOwner*)_NativeInstance)->Selectable();
	 return _result.IsNull() ? nullptr : Macad::Occt::SelectMgr_SelectableObject::CreateDowncasted( _result.get());
}

void Macad::Occt::SelectMgr_EntityOwner::SetSelectable(Macad::Occt::SelectMgr_SelectableObject^ theSelObj)
{
	Handle(::SelectMgr_SelectableObject) h_theSelObj = theSelObj->NativeInstance;
	((::SelectMgr_EntityOwner*)_NativeInstance)->SetSelectable(h_theSelObj);
	theSelObj->NativeInstance = h_theSelObj.get();
}

bool Macad::Occt::SelectMgr_EntityOwner::HandleMouseClick(Macad::Occt::Graphic3d_Vec2i^ thePoint, unsigned int theButton, unsigned int theModifiers, bool theIsDoubleClick)
{
	return ((::SelectMgr_EntityOwner*)_NativeInstance)->HandleMouseClick(*(::Graphic3d_Vec2i*)thePoint->NativeInstance, theButton, theModifiers, theIsDoubleClick);
}

bool Macad::Occt::SelectMgr_EntityOwner::HasLocation()
{
	return ((::SelectMgr_EntityOwner*)_NativeInstance)->HasLocation();
}

Macad::Occt::TopLoc_Location^ Macad::Occt::SelectMgr_EntityOwner::Location()
{
	::TopLoc_Location* _result = new ::TopLoc_Location();
	*_result = ((::SelectMgr_EntityOwner*)_NativeInstance)->Location();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopLoc_Location(_result);
}

void Macad::Occt::SelectMgr_EntityOwner::SetLocation(Macad::Occt::TopLoc_Location^ theLocation)
{
	((::SelectMgr_EntityOwner*)_NativeInstance)->SetLocation(*(::TopLoc_Location*)theLocation->NativeInstance);
}

bool Macad::Occt::SelectMgr_EntityOwner::IsSelected()
{
	return ((::SelectMgr_EntityOwner*)_NativeInstance)->IsSelected();
}

void Macad::Occt::SelectMgr_EntityOwner::SetSelected(bool theIsSelected)
{
	((::SelectMgr_EntityOwner*)_NativeInstance)->SetSelected(theIsSelected);
}

int Macad::Occt::SelectMgr_EntityOwner::State()
{
	return ((::SelectMgr_EntityOwner*)_NativeInstance)->State();
}

void Macad::Occt::SelectMgr_EntityOwner::State(int theStatus)
{
	((::SelectMgr_EntityOwner*)_NativeInstance)->State(theStatus);
}

bool Macad::Occt::SelectMgr_EntityOwner::IsAutoHilight()
{
	return ((::SelectMgr_EntityOwner*)_NativeInstance)->IsAutoHilight();
}

bool Macad::Occt::SelectMgr_EntityOwner::IsForcedHilight()
{
	return ((::SelectMgr_EntityOwner*)_NativeInstance)->IsForcedHilight();
}

void Macad::Occt::SelectMgr_EntityOwner::SetZLayer(int theLayerId)
{
	((::SelectMgr_EntityOwner*)_NativeInstance)->SetZLayer(theLayerId);
}

bool Macad::Occt::SelectMgr_EntityOwner::IsSameSelectable(Macad::Occt::SelectMgr_SelectableObject^ theOther)
{
	Handle(::SelectMgr_SelectableObject) h_theOther = theOther->NativeInstance;
	return ((::SelectMgr_EntityOwner*)_NativeInstance)->IsSameSelectable(h_theOther);
	theOther->NativeInstance = h_theOther.get();
}

bool Macad::Occt::SelectMgr_EntityOwner::ComesFromDecomposition()
{
	return ((::SelectMgr_EntityOwner*)_NativeInstance)->ComesFromDecomposition();
}

void Macad::Occt::SelectMgr_EntityOwner::SetComesFromDecomposition(bool theIsFromDecomposition)
{
	((::SelectMgr_EntityOwner*)_NativeInstance)->SetComesFromDecomposition(theIsFromDecomposition);
}

void Macad::Occt::SelectMgr_EntityOwner::Set(Macad::Occt::SelectMgr_SelectableObject^ theSelObj)
{
	Handle(::SelectMgr_SelectableObject) h_theSelObj = theSelObj->NativeInstance;
	((::SelectMgr_EntityOwner*)_NativeInstance)->Set(h_theSelObj);
	theSelObj->NativeInstance = h_theSelObj.get();
}

void Macad::Occt::SelectMgr_EntityOwner::Set(int thePriority)
{
	((::SelectMgr_EntityOwner*)_NativeInstance)->Set(thePriority);
}


Macad::Occt::SelectMgr_EntityOwner^ Macad::Occt::SelectMgr_EntityOwner::CreateDowncasted(::SelectMgr_EntityOwner* instance)
{
	if( instance == nullptr )
		return nullptr;

	if (instance->IsKind(STANDARD_TYPE(::StdSelect_BRepOwner)))
		return Macad::Occt::StdSelect_BRepOwner::CreateDowncasted((::StdSelect_BRepOwner*)instance);
	if (instance->IsKind(STANDARD_TYPE(::AIS_LightSourceOwner)))
		return Macad::Occt::AIS_LightSourceOwner::CreateDowncasted((::AIS_LightSourceOwner*)instance);
	if (instance->IsKind(STANDARD_TYPE(::AIS_ManipulatorOwner)))
		return Macad::Occt::AIS_ManipulatorOwner::CreateDowncasted((::AIS_ManipulatorOwner*)instance);
	if (instance->IsKind(STANDARD_TYPE(::AIS_PointCloudOwner)))
		return Macad::Occt::AIS_PointCloudOwner::CreateDowncasted((::AIS_PointCloudOwner*)instance);
	if (instance->IsKind(STANDARD_TYPE(::AIS_TrihedronOwner)))
		return Macad::Occt::AIS_TrihedronOwner::CreateDowncasted((::AIS_TrihedronOwner*)instance);
	if (instance->IsKind(STANDARD_TYPE(::AIS_ViewCubeOwner)))
		return Macad::Occt::AIS_ViewCubeOwner::CreateDowncasted((::AIS_ViewCubeOwner*)instance);

	return gcnew Macad::Occt::SelectMgr_EntityOwner( instance );
}



//---------------------------------------------------------------------
//  Class  SelectMgr_Filter
//---------------------------------------------------------------------

Macad::Occt::SelectMgr_Filter::SelectMgr_Filter(Macad::Occt::SelectMgr_Filter^ parameter1)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	throw gcnew System::NotImplementedException("Native class is abstract");
}

Macad::Occt::SelectMgr_Filter::SelectMgr_Filter()
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	throw gcnew System::NotImplementedException("Native class is abstract");
}

bool Macad::Occt::SelectMgr_Filter::IsOk(Macad::Occt::SelectMgr_EntityOwner^ anObj)
{
	Handle(::SelectMgr_EntityOwner) h_anObj = anObj->NativeInstance;
	return ((::SelectMgr_Filter*)_NativeInstance)->IsOk(h_anObj);
	anObj->NativeInstance = h_anObj.get();
}

bool Macad::Occt::SelectMgr_Filter::ActsOn(Macad::Occt::TopAbs_ShapeEnum aStandardMode)
{
	return ((::SelectMgr_Filter*)_NativeInstance)->ActsOn((::TopAbs_ShapeEnum)aStandardMode);
}


Macad::Occt::SelectMgr_Filter^ Macad::Occt::SelectMgr_Filter::CreateDowncasted(::SelectMgr_Filter* instance)
{
	if( instance == nullptr )
		return nullptr;

	if (instance->IsKind(STANDARD_TYPE(::SelectMgr_CompositionFilter)))
		return Macad::Occt::SelectMgr_CompositionFilter::CreateDowncasted((::SelectMgr_CompositionFilter*)instance);
	if (instance->IsKind(STANDARD_TYPE(::StdSelect_EdgeFilter)))
		return Macad::Occt::StdSelect_EdgeFilter::CreateDowncasted((::StdSelect_EdgeFilter*)instance);
	if (instance->IsKind(STANDARD_TYPE(::StdSelect_FaceFilter)))
		return Macad::Occt::StdSelect_FaceFilter::CreateDowncasted((::StdSelect_FaceFilter*)instance);
	if (instance->IsKind(STANDARD_TYPE(::StdSelect_ShapeTypeFilter)))
		return Macad::Occt::StdSelect_ShapeTypeFilter::CreateDowncasted((::StdSelect_ShapeTypeFilter*)instance);
	if (instance->IsKind(STANDARD_TYPE(::AIS_AttributeFilter)))
		return Macad::Occt::AIS_AttributeFilter::CreateDowncasted((::AIS_AttributeFilter*)instance);
	if (instance->IsKind(STANDARD_TYPE(::AIS_BadEdgeFilter)))
		return Macad::Occt::AIS_BadEdgeFilter::CreateDowncasted((::AIS_BadEdgeFilter*)instance);
	if (instance->IsKind(STANDARD_TYPE(::AIS_C0RegularityFilter)))
		return Macad::Occt::AIS_C0RegularityFilter::CreateDowncasted((::AIS_C0RegularityFilter*)instance);
	if (instance->IsKind(STANDARD_TYPE(::AIS_ExclusionFilter)))
		return Macad::Occt::AIS_ExclusionFilter::CreateDowncasted((::AIS_ExclusionFilter*)instance);
	if (instance->IsKind(STANDARD_TYPE(::AIS_TypeFilter)))
		return Macad::Occt::AIS_TypeFilter::CreateDowncasted((::AIS_TypeFilter*)instance);

	return gcnew Macad::Occt::SelectMgr_Filter( instance );
}



//---------------------------------------------------------------------
//  Class  SelectMgr_CompositionFilter
//---------------------------------------------------------------------

Macad::Occt::SelectMgr_CompositionFilter::SelectMgr_CompositionFilter(Macad::Occt::SelectMgr_CompositionFilter^ parameter1)
	: Macad::Occt::SelectMgr_Filter(BaseClass::InitMode::Uninitialized)
{
	throw gcnew System::NotImplementedException("Native class is abstract");
}

Macad::Occt::SelectMgr_CompositionFilter::SelectMgr_CompositionFilter()
	: Macad::Occt::SelectMgr_Filter(BaseClass::InitMode::Uninitialized)
{
	throw gcnew System::NotImplementedException("Native class is abstract");
}

void Macad::Occt::SelectMgr_CompositionFilter::Add(Macad::Occt::SelectMgr_Filter^ afilter)
{
	Handle(::SelectMgr_Filter) h_afilter = afilter->NativeInstance;
	((::SelectMgr_CompositionFilter*)_NativeInstance)->Add(h_afilter);
	afilter->NativeInstance = h_afilter.get();
}

void Macad::Occt::SelectMgr_CompositionFilter::Remove(Macad::Occt::SelectMgr_Filter^ aFilter)
{
	Handle(::SelectMgr_Filter) h_aFilter = aFilter->NativeInstance;
	((::SelectMgr_CompositionFilter*)_NativeInstance)->Remove(h_aFilter);
	aFilter->NativeInstance = h_aFilter.get();
}

bool Macad::Occt::SelectMgr_CompositionFilter::IsEmpty()
{
	return ((::SelectMgr_CompositionFilter*)_NativeInstance)->IsEmpty();
}

bool Macad::Occt::SelectMgr_CompositionFilter::IsIn(Macad::Occt::SelectMgr_Filter^ aFilter)
{
	Handle(::SelectMgr_Filter) h_aFilter = aFilter->NativeInstance;
	return ((::SelectMgr_CompositionFilter*)_NativeInstance)->IsIn(h_aFilter);
	aFilter->NativeInstance = h_aFilter.get();
}

Macad::Occt::SelectMgr_ListOfFilter^ Macad::Occt::SelectMgr_CompositionFilter::StoredFilters()
{
	::SelectMgr_ListOfFilter* _result = new ::SelectMgr_ListOfFilter();
	*_result =  (::SelectMgr_ListOfFilter)((::SelectMgr_CompositionFilter*)_NativeInstance)->StoredFilters();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::SelectMgr_ListOfFilter(_result);
}

void Macad::Occt::SelectMgr_CompositionFilter::Clear()
{
	((::SelectMgr_CompositionFilter*)_NativeInstance)->Clear();
}

bool Macad::Occt::SelectMgr_CompositionFilter::ActsOn(Macad::Occt::TopAbs_ShapeEnum aStandardMode)
{
	return ((::SelectMgr_CompositionFilter*)_NativeInstance)->ActsOn((::TopAbs_ShapeEnum)aStandardMode);
}


Macad::Occt::SelectMgr_CompositionFilter^ Macad::Occt::SelectMgr_CompositionFilter::CreateDowncasted(::SelectMgr_CompositionFilter* instance)
{
	if( instance == nullptr )
		return nullptr;

	if (instance->IsKind(STANDARD_TYPE(::SelectMgr_AndFilter)))
		return Macad::Occt::SelectMgr_AndFilter::CreateDowncasted((::SelectMgr_AndFilter*)instance);
	if (instance->IsKind(STANDARD_TYPE(::SelectMgr_AndOrFilter)))
		return Macad::Occt::SelectMgr_AndOrFilter::CreateDowncasted((::SelectMgr_AndOrFilter*)instance);
	if (instance->IsKind(STANDARD_TYPE(::SelectMgr_OrFilter)))
		return Macad::Occt::SelectMgr_OrFilter::CreateDowncasted((::SelectMgr_OrFilter*)instance);

	return gcnew Macad::Occt::SelectMgr_CompositionFilter( instance );
}



//---------------------------------------------------------------------
//  Class  SelectMgr_AndFilter
//---------------------------------------------------------------------

Macad::Occt::SelectMgr_AndFilter::SelectMgr_AndFilter()
	: Macad::Occt::SelectMgr_CompositionFilter(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::SelectMgr_AndFilter();
}

Macad::Occt::SelectMgr_AndFilter::SelectMgr_AndFilter(Macad::Occt::SelectMgr_AndFilter^ parameter1)
	: Macad::Occt::SelectMgr_CompositionFilter(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::SelectMgr_AndFilter(*(::SelectMgr_AndFilter*)parameter1->NativeInstance);
}

bool Macad::Occt::SelectMgr_AndFilter::IsOk(Macad::Occt::SelectMgr_EntityOwner^ anobj)
{
	Handle(::SelectMgr_EntityOwner) h_anobj = anobj->NativeInstance;
	return ((::SelectMgr_AndFilter*)_NativeInstance)->IsOk(h_anobj);
	anobj->NativeInstance = h_anobj.get();
}


Macad::Occt::SelectMgr_AndFilter^ Macad::Occt::SelectMgr_AndFilter::CreateDowncasted(::SelectMgr_AndFilter* instance)
{
	return gcnew Macad::Occt::SelectMgr_AndFilter( instance );
}



//---------------------------------------------------------------------
//  Class  SelectMgr_AndOrFilter
//---------------------------------------------------------------------

Macad::Occt::SelectMgr_AndOrFilter::SelectMgr_AndOrFilter(Macad::Occt::SelectMgr_FilterType theFilterType)
	: Macad::Occt::SelectMgr_CompositionFilter(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::SelectMgr_AndOrFilter((::SelectMgr_FilterType)theFilterType);
}

Macad::Occt::SelectMgr_AndOrFilter::SelectMgr_AndOrFilter(Macad::Occt::SelectMgr_AndOrFilter^ parameter1)
	: Macad::Occt::SelectMgr_CompositionFilter(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::SelectMgr_AndOrFilter(*(::SelectMgr_AndOrFilter*)parameter1->NativeInstance);
}

bool Macad::Occt::SelectMgr_AndOrFilter::IsOk(Macad::Occt::SelectMgr_EntityOwner^ theObj)
{
	Handle(::SelectMgr_EntityOwner) h_theObj = theObj->NativeInstance;
	return ((::SelectMgr_AndOrFilter*)_NativeInstance)->IsOk(h_theObj);
	theObj->NativeInstance = h_theObj.get();
}

Macad::Occt::SelectMgr_FilterType Macad::Occt::SelectMgr_AndOrFilter::FilterType()
{
	return (Macad::Occt::SelectMgr_FilterType)((::SelectMgr_AndOrFilter*)_NativeInstance)->FilterType();
}

void Macad::Occt::SelectMgr_AndOrFilter::SetFilterType(Macad::Occt::SelectMgr_FilterType theFilterType)
{
	((::SelectMgr_AndOrFilter*)_NativeInstance)->SetFilterType((::SelectMgr_FilterType)theFilterType);
}


Macad::Occt::SelectMgr_AndOrFilter^ Macad::Occt::SelectMgr_AndOrFilter::CreateDowncasted(::SelectMgr_AndOrFilter* instance)
{
	return gcnew Macad::Occt::SelectMgr_AndOrFilter( instance );
}



//---------------------------------------------------------------------
//  Class  SelectMgr_ViewClipRange
//---------------------------------------------------------------------

Macad::Occt::SelectMgr_ViewClipRange::SelectMgr_ViewClipRange()
	: BaseClass<::SelectMgr_ViewClipRange>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::SelectMgr_ViewClipRange();
}

Macad::Occt::SelectMgr_ViewClipRange::SelectMgr_ViewClipRange(Macad::Occt::SelectMgr_ViewClipRange^ parameter1)
	: BaseClass<::SelectMgr_ViewClipRange>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::SelectMgr_ViewClipRange(*(::SelectMgr_ViewClipRange*)parameter1->NativeInstance);
}

bool Macad::Occt::SelectMgr_ViewClipRange::IsClipped(double theDepth)
{
	return ((::SelectMgr_ViewClipRange*)_NativeInstance)->IsClipped(theDepth);
}

bool Macad::Occt::SelectMgr_ViewClipRange::GetNearestDepth(Macad::Occt::Bnd_Range^ theRange, double% theDepth)
{
	pin_ptr<double> pp_theDepth = &theDepth;
	return ((::SelectMgr_ViewClipRange*)_NativeInstance)->GetNearestDepth(*(::Bnd_Range*)theRange->NativeInstance, *(Standard_Real*)pp_theDepth);
}

void Macad::Occt::SelectMgr_ViewClipRange::SetVoid()
{
	((::SelectMgr_ViewClipRange*)_NativeInstance)->SetVoid();
}

void Macad::Occt::SelectMgr_ViewClipRange::AddClippingPlanes(Macad::Occt::Graphic3d_SequenceOfHClipPlane^ thePlanes, Macad::Occt::Ax1 thePickRay)
{
	pin_ptr<Macad::Occt::Ax1> pp_thePickRay = &thePickRay;
	((::SelectMgr_ViewClipRange*)_NativeInstance)->AddClippingPlanes(*(::Graphic3d_SequenceOfHClipPlane*)thePlanes->NativeInstance, *(gp_Ax1*)pp_thePickRay);
}

Macad::Occt::Bnd_Range^ Macad::Occt::SelectMgr_ViewClipRange::ChangeUnclipRange()
{
	::Bnd_Range* _result = new ::Bnd_Range();
	*_result = ((::SelectMgr_ViewClipRange*)_NativeInstance)->ChangeUnclipRange();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::Bnd_Range(_result);
}

void Macad::Occt::SelectMgr_ViewClipRange::AddClipSubRange(Macad::Occt::Bnd_Range^ theRange)
{
	((::SelectMgr_ViewClipRange*)_NativeInstance)->AddClipSubRange(*(::Bnd_Range*)theRange->NativeInstance);
}




//---------------------------------------------------------------------
//  Class  SelectMgr_BaseIntersector
//---------------------------------------------------------------------

Macad::Occt::SelectMgr_BaseIntersector::SelectMgr_BaseIntersector()
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	throw gcnew System::NotImplementedException("Native class is abstract");
}

Macad::Occt::SelectMgr_BaseIntersector::SelectMgr_BaseIntersector(Macad::Occt::SelectMgr_BaseIntersector^ parameter1)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	throw gcnew System::NotImplementedException("Native class is abstract");
}

void Macad::Occt::SelectMgr_BaseIntersector::Build()
{
	((::SelectMgr_BaseIntersector*)_NativeInstance)->Build();
}

Macad::Occt::SelectMgr_SelectionType Macad::Occt::SelectMgr_BaseIntersector::GetSelectionType()
{
	return (Macad::Occt::SelectMgr_SelectionType)((::SelectMgr_BaseIntersector*)_NativeInstance)->GetSelectionType();
}

bool Macad::Occt::SelectMgr_BaseIntersector::IsScalable()
{
	return ((::SelectMgr_BaseIntersector*)_NativeInstance)->IsScalable();
}

void Macad::Occt::SelectMgr_BaseIntersector::SetPixelTolerance(int theTol)
{
	((::SelectMgr_BaseIntersector*)_NativeInstance)->SetPixelTolerance(theTol);
}

Macad::Occt::Graphic3d_Camera^ Macad::Occt::SelectMgr_BaseIntersector::Camera()
{
	Handle(::Graphic3d_Camera) _result;
	_result = ((::SelectMgr_BaseIntersector*)_NativeInstance)->Camera();
	 return _result.IsNull() ? nullptr : Macad::Occt::Graphic3d_Camera::CreateDowncasted( _result.get());
}

void Macad::Occt::SelectMgr_BaseIntersector::SetCamera(Macad::Occt::Graphic3d_Camera^ theCamera)
{
	Handle(::Graphic3d_Camera) h_theCamera = theCamera->NativeInstance;
	((::SelectMgr_BaseIntersector*)_NativeInstance)->SetCamera(h_theCamera);
	theCamera->NativeInstance = h_theCamera.get();
}

void Macad::Occt::SelectMgr_BaseIntersector::WindowSize(int% theWidth, int% theHeight)
{
	pin_ptr<int> pp_theWidth = &theWidth;
	pin_ptr<int> pp_theHeight = &theHeight;
	((::SelectMgr_BaseIntersector*)_NativeInstance)->WindowSize(*(Standard_Integer*)pp_theWidth, *(Standard_Integer*)pp_theHeight);
}

void Macad::Occt::SelectMgr_BaseIntersector::SetWindowSize(int theWidth, int theHeight)
{
	((::SelectMgr_BaseIntersector*)_NativeInstance)->SetWindowSize(theWidth, theHeight);
}

void Macad::Occt::SelectMgr_BaseIntersector::SetViewport(double theX, double theY, double theWidth, double theHeight)
{
	((::SelectMgr_BaseIntersector*)_NativeInstance)->SetViewport(theX, theY, theWidth, theHeight);
}

Macad::Occt::Pnt Macad::Occt::SelectMgr_BaseIntersector::GetNearPnt()
{
	return Macad::Occt::Pnt(((::SelectMgr_BaseIntersector*)_NativeInstance)->GetNearPnt());
}

Macad::Occt::Pnt Macad::Occt::SelectMgr_BaseIntersector::GetFarPnt()
{
	return Macad::Occt::Pnt(((::SelectMgr_BaseIntersector*)_NativeInstance)->GetFarPnt());
}

Macad::Occt::Dir Macad::Occt::SelectMgr_BaseIntersector::GetViewRayDirection()
{
	return Macad::Occt::Dir(((::SelectMgr_BaseIntersector*)_NativeInstance)->GetViewRayDirection());
}

Macad::Occt::Pnt2d Macad::Occt::SelectMgr_BaseIntersector::GetMousePosition()
{
	return Macad::Occt::Pnt2d(((::SelectMgr_BaseIntersector*)_NativeInstance)->GetMousePosition());
}

bool Macad::Occt::SelectMgr_BaseIntersector::OverlapsPoint(Macad::Occt::Pnt thePnt, Macad::Occt::SelectMgr_ViewClipRange^ theClipRange, Macad::Occt::SelectBasics_PickResult^ thePickResult)
{
	pin_ptr<Macad::Occt::Pnt> pp_thePnt = &thePnt;
	return ((::SelectMgr_BaseIntersector*)_NativeInstance)->OverlapsPoint(*(gp_Pnt*)pp_thePnt, *(::SelectMgr_ViewClipRange*)theClipRange->NativeInstance, *(::SelectBasics_PickResult*)thePickResult->NativeInstance);
}

bool Macad::Occt::SelectMgr_BaseIntersector::OverlapsPoint(Macad::Occt::Pnt thePnt)
{
	pin_ptr<Macad::Occt::Pnt> pp_thePnt = &thePnt;
	return ((::SelectMgr_BaseIntersector*)_NativeInstance)->OverlapsPoint(*(gp_Pnt*)pp_thePnt);
}

bool Macad::Occt::SelectMgr_BaseIntersector::OverlapsSegment(Macad::Occt::Pnt thePnt1, Macad::Occt::Pnt thePnt2, Macad::Occt::SelectMgr_ViewClipRange^ theClipRange, Macad::Occt::SelectBasics_PickResult^ thePickResult)
{
	pin_ptr<Macad::Occt::Pnt> pp_thePnt1 = &thePnt1;
	pin_ptr<Macad::Occt::Pnt> pp_thePnt2 = &thePnt2;
	return ((::SelectMgr_BaseIntersector*)_NativeInstance)->OverlapsSegment(*(gp_Pnt*)pp_thePnt1, *(gp_Pnt*)pp_thePnt2, *(::SelectMgr_ViewClipRange*)theClipRange->NativeInstance, *(::SelectBasics_PickResult*)thePickResult->NativeInstance);
}

bool Macad::Occt::SelectMgr_BaseIntersector::OverlapsSphere(Macad::Occt::Pnt theCenter, double theRadius, bool% theInside)
{
	pin_ptr<Macad::Occt::Pnt> pp_theCenter = &theCenter;
	pin_ptr<bool> pp_theInside = &theInside;
	return ((::SelectMgr_BaseIntersector*)_NativeInstance)->OverlapsSphere(*(gp_Pnt*)pp_theCenter, theRadius, (Standard_Boolean*)pp_theInside);
}

bool Macad::Occt::SelectMgr_BaseIntersector::OverlapsSphere(Macad::Occt::Pnt theCenter, double theRadius)
{
	pin_ptr<Macad::Occt::Pnt> pp_theCenter = &theCenter;
	return ((::SelectMgr_BaseIntersector*)_NativeInstance)->OverlapsSphere(*(gp_Pnt*)pp_theCenter, theRadius, 0);
}

bool Macad::Occt::SelectMgr_BaseIntersector::OverlapsSphere(Macad::Occt::Pnt theCenter, double theRadius, Macad::Occt::SelectMgr_ViewClipRange^ theClipRange, Macad::Occt::SelectBasics_PickResult^ thePickResult)
{
	pin_ptr<Macad::Occt::Pnt> pp_theCenter = &theCenter;
	return ((::SelectMgr_BaseIntersector*)_NativeInstance)->OverlapsSphere(*(gp_Pnt*)pp_theCenter, theRadius, *(::SelectMgr_ViewClipRange*)theClipRange->NativeInstance, *(::SelectBasics_PickResult*)thePickResult->NativeInstance);
}

bool Macad::Occt::SelectMgr_BaseIntersector::OverlapsCylinder(double theBottomRad, double theTopRad, double theHeight, Macad::Occt::Trsf theTrsf, Macad::Occt::SelectMgr_ViewClipRange^ theClipRange, Macad::Occt::SelectBasics_PickResult^ thePickResult)
{
	pin_ptr<Macad::Occt::Trsf> pp_theTrsf = &theTrsf;
	return ((::SelectMgr_BaseIntersector*)_NativeInstance)->OverlapsCylinder(theBottomRad, theTopRad, theHeight, *(gp_Trsf*)pp_theTrsf, *(::SelectMgr_ViewClipRange*)theClipRange->NativeInstance, *(::SelectBasics_PickResult*)thePickResult->NativeInstance);
}

bool Macad::Occt::SelectMgr_BaseIntersector::OverlapsCylinder(double theBottomRad, double theTopRad, double theHeight, Macad::Occt::Trsf theTrsf, bool% theInside)
{
	pin_ptr<Macad::Occt::Trsf> pp_theTrsf = &theTrsf;
	pin_ptr<bool> pp_theInside = &theInside;
	return ((::SelectMgr_BaseIntersector*)_NativeInstance)->OverlapsCylinder(theBottomRad, theTopRad, theHeight, *(gp_Trsf*)pp_theTrsf, (Standard_Boolean*)pp_theInside);
}

bool Macad::Occt::SelectMgr_BaseIntersector::OverlapsCylinder(double theBottomRad, double theTopRad, double theHeight, Macad::Occt::Trsf theTrsf)
{
	pin_ptr<Macad::Occt::Trsf> pp_theTrsf = &theTrsf;
	return ((::SelectMgr_BaseIntersector*)_NativeInstance)->OverlapsCylinder(theBottomRad, theTopRad, theHeight, *(gp_Trsf*)pp_theTrsf, 0);
}

double Macad::Occt::SelectMgr_BaseIntersector::DistToGeometryCenter(Macad::Occt::Pnt theCOG)
{
	pin_ptr<Macad::Occt::Pnt> pp_theCOG = &theCOG;
	return ((::SelectMgr_BaseIntersector*)_NativeInstance)->DistToGeometryCenter(*(gp_Pnt*)pp_theCOG);
}

Macad::Occt::Pnt Macad::Occt::SelectMgr_BaseIntersector::DetectedPoint(double theDepth)
{
	return Macad::Occt::Pnt(((::SelectMgr_BaseIntersector*)_NativeInstance)->DetectedPoint(theDepth));
}

bool Macad::Occt::SelectMgr_BaseIntersector::RaySphereIntersection(Macad::Occt::Pnt theCenter, double theRadius, Macad::Occt::Pnt theLoc, Macad::Occt::Dir theRayDir, double% theTimeEnter, double% theTimeLeave)
{
	pin_ptr<Macad::Occt::Pnt> pp_theCenter = &theCenter;
	pin_ptr<Macad::Occt::Pnt> pp_theLoc = &theLoc;
	pin_ptr<Macad::Occt::Dir> pp_theRayDir = &theRayDir;
	pin_ptr<double> pp_theTimeEnter = &theTimeEnter;
	pin_ptr<double> pp_theTimeLeave = &theTimeLeave;
	return ((::SelectMgr_BaseIntersector*)_NativeInstance)->RaySphereIntersection(*(gp_Pnt*)pp_theCenter, theRadius, *(gp_Pnt*)pp_theLoc, *(gp_Dir*)pp_theRayDir, *(Standard_Real*)pp_theTimeEnter, *(Standard_Real*)pp_theTimeLeave);
}

bool Macad::Occt::SelectMgr_BaseIntersector::RayCylinderIntersection(double theBottomRadius, double theTopRadius, double theHeight, Macad::Occt::Pnt theLoc, Macad::Occt::Dir theRayDir, double% theTimeEnter, double% theTimeLeave)
{
	pin_ptr<Macad::Occt::Pnt> pp_theLoc = &theLoc;
	pin_ptr<Macad::Occt::Dir> pp_theRayDir = &theRayDir;
	pin_ptr<double> pp_theTimeEnter = &theTimeEnter;
	pin_ptr<double> pp_theTimeLeave = &theTimeLeave;
	return ((::SelectMgr_BaseIntersector*)_NativeInstance)->RayCylinderIntersection(theBottomRadius, theTopRadius, theHeight, *(gp_Pnt*)pp_theLoc, *(gp_Dir*)pp_theRayDir, *(Standard_Real*)pp_theTimeEnter, *(Standard_Real*)pp_theTimeLeave);
}


Macad::Occt::SelectMgr_BaseIntersector^ Macad::Occt::SelectMgr_BaseIntersector::CreateDowncasted(::SelectMgr_BaseIntersector* instance)
{
	if( instance == nullptr )
		return nullptr;

	if (instance->IsKind(STANDARD_TYPE(::SelectMgr_AxisIntersector)))
		return Macad::Occt::SelectMgr_AxisIntersector::CreateDowncasted((::SelectMgr_AxisIntersector*)instance);

	return gcnew Macad::Occt::SelectMgr_BaseIntersector( instance );
}



//---------------------------------------------------------------------
//  Class  SelectMgr_AxisIntersector
//---------------------------------------------------------------------

Macad::Occt::SelectMgr_AxisIntersector::SelectMgr_AxisIntersector()
	: Macad::Occt::SelectMgr_BaseIntersector(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::SelectMgr_AxisIntersector();
}

Macad::Occt::SelectMgr_AxisIntersector::SelectMgr_AxisIntersector(Macad::Occt::SelectMgr_AxisIntersector^ parameter1)
	: Macad::Occt::SelectMgr_BaseIntersector(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::SelectMgr_AxisIntersector(*(::SelectMgr_AxisIntersector*)parameter1->NativeInstance);
}

void Macad::Occt::SelectMgr_AxisIntersector::Init(Macad::Occt::Ax1 theAxis)
{
	pin_ptr<Macad::Occt::Ax1> pp_theAxis = &theAxis;
	((::SelectMgr_AxisIntersector*)_NativeInstance)->Init(*(gp_Ax1*)pp_theAxis);
}

void Macad::Occt::SelectMgr_AxisIntersector::Build()
{
	((::SelectMgr_AxisIntersector*)_NativeInstance)->Build();
}

void Macad::Occt::SelectMgr_AxisIntersector::SetCamera(Macad::Occt::Graphic3d_Camera^ theCamera)
{
	Handle(::Graphic3d_Camera) h_theCamera = theCamera->NativeInstance;
	((::SelectMgr_AxisIntersector*)_NativeInstance)->SetCamera(h_theCamera);
	theCamera->NativeInstance = h_theCamera.get();
}

bool Macad::Occt::SelectMgr_AxisIntersector::IsScalable()
{
	return ((::SelectMgr_AxisIntersector*)_NativeInstance)->IsScalable();
}

bool Macad::Occt::SelectMgr_AxisIntersector::OverlapsPoint(Macad::Occt::Pnt thePnt, Macad::Occt::SelectMgr_ViewClipRange^ theClipRange, Macad::Occt::SelectBasics_PickResult^ thePickResult)
{
	pin_ptr<Macad::Occt::Pnt> pp_thePnt = &thePnt;
	return ((::SelectMgr_AxisIntersector*)_NativeInstance)->OverlapsPoint(*(gp_Pnt*)pp_thePnt, *(::SelectMgr_ViewClipRange*)theClipRange->NativeInstance, *(::SelectBasics_PickResult*)thePickResult->NativeInstance);
}

bool Macad::Occt::SelectMgr_AxisIntersector::OverlapsPoint(Macad::Occt::Pnt thePnt)
{
	pin_ptr<Macad::Occt::Pnt> pp_thePnt = &thePnt;
	return ((::SelectMgr_AxisIntersector*)_NativeInstance)->OverlapsPoint(*(gp_Pnt*)pp_thePnt);
}

bool Macad::Occt::SelectMgr_AxisIntersector::OverlapsSegment(Macad::Occt::Pnt thePnt1, Macad::Occt::Pnt thePnt2, Macad::Occt::SelectMgr_ViewClipRange^ theClipRange, Macad::Occt::SelectBasics_PickResult^ thePickResult)
{
	pin_ptr<Macad::Occt::Pnt> pp_thePnt1 = &thePnt1;
	pin_ptr<Macad::Occt::Pnt> pp_thePnt2 = &thePnt2;
	return ((::SelectMgr_AxisIntersector*)_NativeInstance)->OverlapsSegment(*(gp_Pnt*)pp_thePnt1, *(gp_Pnt*)pp_thePnt2, *(::SelectMgr_ViewClipRange*)theClipRange->NativeInstance, *(::SelectBasics_PickResult*)thePickResult->NativeInstance);
}

bool Macad::Occt::SelectMgr_AxisIntersector::OverlapsSphere(Macad::Occt::Pnt theCenter, double theRadius, bool% theInside)
{
	pin_ptr<Macad::Occt::Pnt> pp_theCenter = &theCenter;
	pin_ptr<bool> pp_theInside = &theInside;
	return ((::SelectMgr_AxisIntersector*)_NativeInstance)->OverlapsSphere(*(gp_Pnt*)pp_theCenter, theRadius, (Standard_Boolean*)pp_theInside);
}

bool Macad::Occt::SelectMgr_AxisIntersector::OverlapsSphere(Macad::Occt::Pnt theCenter, double theRadius)
{
	pin_ptr<Macad::Occt::Pnt> pp_theCenter = &theCenter;
	return ((::SelectMgr_AxisIntersector*)_NativeInstance)->OverlapsSphere(*(gp_Pnt*)pp_theCenter, theRadius, 0);
}

bool Macad::Occt::SelectMgr_AxisIntersector::OverlapsSphere(Macad::Occt::Pnt theCenter, double theRadius, Macad::Occt::SelectMgr_ViewClipRange^ theClipRange, Macad::Occt::SelectBasics_PickResult^ thePickResult)
{
	pin_ptr<Macad::Occt::Pnt> pp_theCenter = &theCenter;
	return ((::SelectMgr_AxisIntersector*)_NativeInstance)->OverlapsSphere(*(gp_Pnt*)pp_theCenter, theRadius, *(::SelectMgr_ViewClipRange*)theClipRange->NativeInstance, *(::SelectBasics_PickResult*)thePickResult->NativeInstance);
}

bool Macad::Occt::SelectMgr_AxisIntersector::OverlapsCylinder(double theBottomRad, double theTopRad, double theHeight, Macad::Occt::Trsf theTrsf, Macad::Occt::SelectMgr_ViewClipRange^ theClipRange, Macad::Occt::SelectBasics_PickResult^ thePickResult)
{
	pin_ptr<Macad::Occt::Trsf> pp_theTrsf = &theTrsf;
	return ((::SelectMgr_AxisIntersector*)_NativeInstance)->OverlapsCylinder(theBottomRad, theTopRad, theHeight, *(gp_Trsf*)pp_theTrsf, *(::SelectMgr_ViewClipRange*)theClipRange->NativeInstance, *(::SelectBasics_PickResult*)thePickResult->NativeInstance);
}

bool Macad::Occt::SelectMgr_AxisIntersector::OverlapsCylinder(double theBottomRad, double theTopRad, double theHeight, Macad::Occt::Trsf theTrsf, bool% theInside)
{
	pin_ptr<Macad::Occt::Trsf> pp_theTrsf = &theTrsf;
	pin_ptr<bool> pp_theInside = &theInside;
	return ((::SelectMgr_AxisIntersector*)_NativeInstance)->OverlapsCylinder(theBottomRad, theTopRad, theHeight, *(gp_Trsf*)pp_theTrsf, (Standard_Boolean*)pp_theInside);
}

bool Macad::Occt::SelectMgr_AxisIntersector::OverlapsCylinder(double theBottomRad, double theTopRad, double theHeight, Macad::Occt::Trsf theTrsf)
{
	pin_ptr<Macad::Occt::Trsf> pp_theTrsf = &theTrsf;
	return ((::SelectMgr_AxisIntersector*)_NativeInstance)->OverlapsCylinder(theBottomRad, theTopRad, theHeight, *(gp_Trsf*)pp_theTrsf, 0);
}

double Macad::Occt::SelectMgr_AxisIntersector::DistToGeometryCenter(Macad::Occt::Pnt theCOG)
{
	pin_ptr<Macad::Occt::Pnt> pp_theCOG = &theCOG;
	return ((::SelectMgr_AxisIntersector*)_NativeInstance)->DistToGeometryCenter(*(gp_Pnt*)pp_theCOG);
}

Macad::Occt::Pnt Macad::Occt::SelectMgr_AxisIntersector::DetectedPoint(double theDepth)
{
	return Macad::Occt::Pnt(((::SelectMgr_AxisIntersector*)_NativeInstance)->DetectedPoint(theDepth));
}

Macad::Occt::Pnt Macad::Occt::SelectMgr_AxisIntersector::GetNearPnt()
{
	return Macad::Occt::Pnt(((::SelectMgr_AxisIntersector*)_NativeInstance)->GetNearPnt());
}

Macad::Occt::Pnt Macad::Occt::SelectMgr_AxisIntersector::GetFarPnt()
{
	return Macad::Occt::Pnt(((::SelectMgr_AxisIntersector*)_NativeInstance)->GetFarPnt());
}

Macad::Occt::Dir Macad::Occt::SelectMgr_AxisIntersector::GetViewRayDirection()
{
	return Macad::Occt::Dir(((::SelectMgr_AxisIntersector*)_NativeInstance)->GetViewRayDirection());
}


Macad::Occt::SelectMgr_AxisIntersector^ Macad::Occt::SelectMgr_AxisIntersector::CreateDowncasted(::SelectMgr_AxisIntersector* instance)
{
	return gcnew Macad::Occt::SelectMgr_AxisIntersector( instance );
}



//---------------------------------------------------------------------
//  Class  SelectMgr_BVHThreadPool
//---------------------------------------------------------------------

Macad::Occt::SelectMgr_BVHThreadPool::SelectMgr_BVHThreadPool(int theNbThreads)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::SelectMgr_BVHThreadPool(theNbThreads);
}

void Macad::Occt::SelectMgr_BVHThreadPool::StopThreads()
{
	((::SelectMgr_BVHThreadPool*)_NativeInstance)->StopThreads();
}

void Macad::Occt::SelectMgr_BVHThreadPool::WaitThreads()
{
	((::SelectMgr_BVHThreadPool*)_NativeInstance)->WaitThreads();
}


Macad::Occt::SelectMgr_BVHThreadPool^ Macad::Occt::SelectMgr_BVHThreadPool::CreateDowncasted(::SelectMgr_BVHThreadPool* instance)
{
	return gcnew Macad::Occt::SelectMgr_BVHThreadPool( instance );
}



//---------------------------------------------------------------------
//  Class  SelectMgr_SensitiveEntity
//---------------------------------------------------------------------

Macad::Occt::SelectMgr_SensitiveEntity::SelectMgr_SensitiveEntity(Macad::Occt::SelectMgr_SensitiveEntity^ parameter1)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::SelectMgr_SensitiveEntity(*(::SelectMgr_SensitiveEntity*)parameter1->NativeInstance);
}

void Macad::Occt::SelectMgr_SensitiveEntity::Clear()
{
	((::SelectMgr_SensitiveEntity*)_NativeInstance)->Clear();
}

bool Macad::Occt::SelectMgr_SensitiveEntity::IsActiveForSelection()
{
	return ((::SelectMgr_SensitiveEntity*)_NativeInstance)->IsActiveForSelection();
}

void Macad::Occt::SelectMgr_SensitiveEntity::ResetSelectionActiveStatus()
{
	((::SelectMgr_SensitiveEntity*)_NativeInstance)->ResetSelectionActiveStatus();
}

void Macad::Occt::SelectMgr_SensitiveEntity::SetActiveForSelection()
{
	((::SelectMgr_SensitiveEntity*)_NativeInstance)->SetActiveForSelection();
}


Macad::Occt::SelectMgr_SensitiveEntity^ Macad::Occt::SelectMgr_SensitiveEntity::CreateDowncasted(::SelectMgr_SensitiveEntity* instance)
{
	return gcnew Macad::Occt::SelectMgr_SensitiveEntity( instance );
}



//---------------------------------------------------------------------
//  Class  SelectMgr_SelectionManager
//---------------------------------------------------------------------

Macad::Occt::SelectMgr_SelectionManager::SelectMgr_SelectionManager(Macad::Occt::SelectMgr_ViewerSelector^ theSelector)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	Handle(::SelectMgr_ViewerSelector) h_theSelector = theSelector->NativeInstance;
	NativeInstance = new ::SelectMgr_SelectionManager(h_theSelector);
	theSelector->NativeInstance = h_theSelector.get();
}

Macad::Occt::SelectMgr_SelectionManager::SelectMgr_SelectionManager(Macad::Occt::SelectMgr_SelectionManager^ parameter1)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::SelectMgr_SelectionManager(*(::SelectMgr_SelectionManager*)parameter1->NativeInstance);
}

Macad::Occt::SelectMgr_ViewerSelector^ Macad::Occt::SelectMgr_SelectionManager::Selector()
{
	Handle(::SelectMgr_ViewerSelector) _result;
	_result = ((::SelectMgr_SelectionManager*)_NativeInstance)->Selector();
	 return _result.IsNull() ? nullptr : Macad::Occt::SelectMgr_ViewerSelector::CreateDowncasted( _result.get());
}

bool Macad::Occt::SelectMgr_SelectionManager::Contains(Macad::Occt::SelectMgr_SelectableObject^ theObject)
{
	Handle(::SelectMgr_SelectableObject) h_theObject = theObject->NativeInstance;
	return ((::SelectMgr_SelectionManager*)_NativeInstance)->Contains(h_theObject);
	theObject->NativeInstance = h_theObject.get();
}

void Macad::Occt::SelectMgr_SelectionManager::Load(Macad::Occt::SelectMgr_SelectableObject^ theObject, int theMode)
{
	Handle(::SelectMgr_SelectableObject) h_theObject = theObject->NativeInstance;
	((::SelectMgr_SelectionManager*)_NativeInstance)->Load(h_theObject, theMode);
	theObject->NativeInstance = h_theObject.get();
}

void Macad::Occt::SelectMgr_SelectionManager::Load(Macad::Occt::SelectMgr_SelectableObject^ theObject)
{
	Handle(::SelectMgr_SelectableObject) h_theObject = theObject->NativeInstance;
	((::SelectMgr_SelectionManager*)_NativeInstance)->Load(h_theObject, -1);
	theObject->NativeInstance = h_theObject.get();
}

void Macad::Occt::SelectMgr_SelectionManager::Remove(Macad::Occt::SelectMgr_SelectableObject^ theObject)
{
	Handle(::SelectMgr_SelectableObject) h_theObject = theObject->NativeInstance;
	((::SelectMgr_SelectionManager*)_NativeInstance)->Remove(h_theObject);
	theObject->NativeInstance = h_theObject.get();
}

void Macad::Occt::SelectMgr_SelectionManager::Activate(Macad::Occt::SelectMgr_SelectableObject^ theObject, int theMode)
{
	Handle(::SelectMgr_SelectableObject) h_theObject = theObject->NativeInstance;
	((::SelectMgr_SelectionManager*)_NativeInstance)->Activate(h_theObject, theMode);
	theObject->NativeInstance = h_theObject.get();
}

void Macad::Occt::SelectMgr_SelectionManager::Activate(Macad::Occt::SelectMgr_SelectableObject^ theObject)
{
	Handle(::SelectMgr_SelectableObject) h_theObject = theObject->NativeInstance;
	((::SelectMgr_SelectionManager*)_NativeInstance)->Activate(h_theObject, 0);
	theObject->NativeInstance = h_theObject.get();
}

void Macad::Occt::SelectMgr_SelectionManager::Deactivate(Macad::Occt::SelectMgr_SelectableObject^ theObject, int theMode)
{
	Handle(::SelectMgr_SelectableObject) h_theObject = theObject->NativeInstance;
	((::SelectMgr_SelectionManager*)_NativeInstance)->Deactivate(h_theObject, theMode);
	theObject->NativeInstance = h_theObject.get();
}

void Macad::Occt::SelectMgr_SelectionManager::Deactivate(Macad::Occt::SelectMgr_SelectableObject^ theObject)
{
	Handle(::SelectMgr_SelectableObject) h_theObject = theObject->NativeInstance;
	((::SelectMgr_SelectionManager*)_NativeInstance)->Deactivate(h_theObject, -1);
	theObject->NativeInstance = h_theObject.get();
}

bool Macad::Occt::SelectMgr_SelectionManager::IsActivated(Macad::Occt::SelectMgr_SelectableObject^ theObject, int theMode)
{
	Handle(::SelectMgr_SelectableObject) h_theObject = theObject->NativeInstance;
	return ((::SelectMgr_SelectionManager*)_NativeInstance)->IsActivated(h_theObject, theMode);
	theObject->NativeInstance = h_theObject.get();
}

bool Macad::Occt::SelectMgr_SelectionManager::IsActivated(Macad::Occt::SelectMgr_SelectableObject^ theObject)
{
	Handle(::SelectMgr_SelectableObject) h_theObject = theObject->NativeInstance;
	return ((::SelectMgr_SelectionManager*)_NativeInstance)->IsActivated(h_theObject, -1);
	theObject->NativeInstance = h_theObject.get();
}

void Macad::Occt::SelectMgr_SelectionManager::ClearSelectionStructures(Macad::Occt::SelectMgr_SelectableObject^ theObj, int theMode)
{
	Handle(::SelectMgr_SelectableObject) h_theObj = theObj->NativeInstance;
	((::SelectMgr_SelectionManager*)_NativeInstance)->ClearSelectionStructures(h_theObj, theMode);
	theObj->NativeInstance = h_theObj.get();
}

void Macad::Occt::SelectMgr_SelectionManager::ClearSelectionStructures(Macad::Occt::SelectMgr_SelectableObject^ theObj)
{
	Handle(::SelectMgr_SelectableObject) h_theObj = theObj->NativeInstance;
	((::SelectMgr_SelectionManager*)_NativeInstance)->ClearSelectionStructures(h_theObj, -1);
	theObj->NativeInstance = h_theObj.get();
}

void Macad::Occt::SelectMgr_SelectionManager::RestoreSelectionStructures(Macad::Occt::SelectMgr_SelectableObject^ theObj, int theMode)
{
	Handle(::SelectMgr_SelectableObject) h_theObj = theObj->NativeInstance;
	((::SelectMgr_SelectionManager*)_NativeInstance)->RestoreSelectionStructures(h_theObj, theMode);
	theObj->NativeInstance = h_theObj.get();
}

void Macad::Occt::SelectMgr_SelectionManager::RestoreSelectionStructures(Macad::Occt::SelectMgr_SelectableObject^ theObj)
{
	Handle(::SelectMgr_SelectableObject) h_theObj = theObj->NativeInstance;
	((::SelectMgr_SelectionManager*)_NativeInstance)->RestoreSelectionStructures(h_theObj, -1);
	theObj->NativeInstance = h_theObj.get();
}

void Macad::Occt::SelectMgr_SelectionManager::RecomputeSelection(Macad::Occt::SelectMgr_SelectableObject^ theObject, bool theIsForce, int theMode)
{
	Handle(::SelectMgr_SelectableObject) h_theObject = theObject->NativeInstance;
	((::SelectMgr_SelectionManager*)_NativeInstance)->RecomputeSelection(h_theObject, theIsForce, theMode);
	theObject->NativeInstance = h_theObject.get();
}

void Macad::Occt::SelectMgr_SelectionManager::RecomputeSelection(Macad::Occt::SelectMgr_SelectableObject^ theObject, bool theIsForce)
{
	Handle(::SelectMgr_SelectableObject) h_theObject = theObject->NativeInstance;
	((::SelectMgr_SelectionManager*)_NativeInstance)->RecomputeSelection(h_theObject, theIsForce, -1);
	theObject->NativeInstance = h_theObject.get();
}

void Macad::Occt::SelectMgr_SelectionManager::RecomputeSelection(Macad::Occt::SelectMgr_SelectableObject^ theObject)
{
	Handle(::SelectMgr_SelectableObject) h_theObject = theObject->NativeInstance;
	((::SelectMgr_SelectionManager*)_NativeInstance)->RecomputeSelection(h_theObject, false, -1);
	theObject->NativeInstance = h_theObject.get();
}

void Macad::Occt::SelectMgr_SelectionManager::Update(Macad::Occt::SelectMgr_SelectableObject^ theObject, bool theIsForce)
{
	Handle(::SelectMgr_SelectableObject) h_theObject = theObject->NativeInstance;
	((::SelectMgr_SelectionManager*)_NativeInstance)->Update(h_theObject, theIsForce);
	theObject->NativeInstance = h_theObject.get();
}

void Macad::Occt::SelectMgr_SelectionManager::Update(Macad::Occt::SelectMgr_SelectableObject^ theObject)
{
	Handle(::SelectMgr_SelectableObject) h_theObject = theObject->NativeInstance;
	((::SelectMgr_SelectionManager*)_NativeInstance)->Update(h_theObject, true);
	theObject->NativeInstance = h_theObject.get();
}

void Macad::Occt::SelectMgr_SelectionManager::SetUpdateMode(Macad::Occt::SelectMgr_SelectableObject^ theObject, Macad::Occt::SelectMgr_TypeOfUpdate theType)
{
	Handle(::SelectMgr_SelectableObject) h_theObject = theObject->NativeInstance;
	((::SelectMgr_SelectionManager*)_NativeInstance)->SetUpdateMode(h_theObject, (::SelectMgr_TypeOfUpdate)theType);
	theObject->NativeInstance = h_theObject.get();
}

void Macad::Occt::SelectMgr_SelectionManager::SetUpdateMode(Macad::Occt::SelectMgr_SelectableObject^ theObject, int theMode, Macad::Occt::SelectMgr_TypeOfUpdate theType)
{
	Handle(::SelectMgr_SelectableObject) h_theObject = theObject->NativeInstance;
	((::SelectMgr_SelectionManager*)_NativeInstance)->SetUpdateMode(h_theObject, theMode, (::SelectMgr_TypeOfUpdate)theType);
	theObject->NativeInstance = h_theObject.get();
}

void Macad::Occt::SelectMgr_SelectionManager::SetSelectionSensitivity(Macad::Occt::SelectMgr_SelectableObject^ theObject, int theMode, int theNewSens)
{
	Handle(::SelectMgr_SelectableObject) h_theObject = theObject->NativeInstance;
	((::SelectMgr_SelectionManager*)_NativeInstance)->SetSelectionSensitivity(h_theObject, theMode, theNewSens);
	theObject->NativeInstance = h_theObject.get();
}

void Macad::Occt::SelectMgr_SelectionManager::UpdateSelection(Macad::Occt::SelectMgr_SelectableObject^ theObj)
{
	Handle(::SelectMgr_SelectableObject) h_theObj = theObj->NativeInstance;
	((::SelectMgr_SelectionManager*)_NativeInstance)->UpdateSelection(h_theObj);
	theObj->NativeInstance = h_theObj.get();
}


Macad::Occt::SelectMgr_SelectionManager^ Macad::Occt::SelectMgr_SelectionManager::CreateDowncasted(::SelectMgr_SelectionManager* instance)
{
	return gcnew Macad::Occt::SelectMgr_SelectionManager( instance );
}



//---------------------------------------------------------------------
//  Class  SelectMgr_SelectableObject
//---------------------------------------------------------------------

Macad::Occt::SelectMgr_SelectableObject::SelectMgr_SelectableObject(Macad::Occt::SelectMgr_SelectableObject^ parameter1)
	: Macad::Occt::PrsMgr_PresentableObject(BaseClass::InitMode::Uninitialized)
{
	throw gcnew System::NotImplementedException("Native class is abstract");
}

void Macad::Occt::SelectMgr_SelectableObject::ComputeSelection(Macad::Occt::SelectMgr_Selection^ theSelection, int theMode)
{
	Handle(::SelectMgr_Selection) h_theSelection = theSelection->NativeInstance;
	((::SelectMgr_SelectableObject*)_NativeInstance)->ComputeSelection(h_theSelection, theMode);
	theSelection->NativeInstance = h_theSelection.get();
}

bool Macad::Occt::SelectMgr_SelectableObject::AcceptShapeDecomposition()
{
	return ((::SelectMgr_SelectableObject*)_NativeInstance)->AcceptShapeDecomposition();
}

void Macad::Occt::SelectMgr_SelectableObject::RecomputePrimitives()
{
	((::SelectMgr_SelectableObject*)_NativeInstance)->RecomputePrimitives();
}

void Macad::Occt::SelectMgr_SelectableObject::RecomputePrimitives(int theMode)
{
	((::SelectMgr_SelectableObject*)_NativeInstance)->RecomputePrimitives(theMode);
}

void Macad::Occt::SelectMgr_SelectableObject::AddSelection(Macad::Occt::SelectMgr_Selection^ aSelection, int aMode)
{
	Handle(::SelectMgr_Selection) h_aSelection = aSelection->NativeInstance;
	((::SelectMgr_SelectableObject*)_NativeInstance)->AddSelection(h_aSelection, aMode);
	aSelection->NativeInstance = h_aSelection.get();
}

void Macad::Occt::SelectMgr_SelectableObject::ClearSelections(bool update)
{
	((::SelectMgr_SelectableObject*)_NativeInstance)->ClearSelections(update);
}

void Macad::Occt::SelectMgr_SelectableObject::ClearSelections()
{
	((::SelectMgr_SelectableObject*)_NativeInstance)->ClearSelections(false);
}

Macad::Occt::SelectMgr_Selection^ Macad::Occt::SelectMgr_SelectableObject::Selection(int theMode)
{
	Handle(::SelectMgr_Selection) _result;
	_result = ((::SelectMgr_SelectableObject*)_NativeInstance)->Selection(theMode);
	 return _result.IsNull() ? nullptr : Macad::Occt::SelectMgr_Selection::CreateDowncasted( _result.get());
}

bool Macad::Occt::SelectMgr_SelectableObject::HasSelection(int theMode)
{
	return ((::SelectMgr_SelectableObject*)_NativeInstance)->HasSelection(theMode);
}

Macad::Occt::SelectMgr_SequenceOfSelection^ Macad::Occt::SelectMgr_SelectableObject::Selections()
{
	::SelectMgr_SequenceOfSelection* _result = new ::SelectMgr_SequenceOfSelection();
	*_result =  (::SelectMgr_SequenceOfSelection)((::SelectMgr_SelectableObject*)_NativeInstance)->Selections();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::SelectMgr_SequenceOfSelection(_result);
}

void Macad::Occt::SelectMgr_SelectableObject::ResetTransformation()
{
	((::SelectMgr_SelectableObject*)_NativeInstance)->ResetTransformation();
}

void Macad::Occt::SelectMgr_SelectableObject::UpdateTransformation()
{
	((::SelectMgr_SelectableObject*)_NativeInstance)->UpdateTransformation();
}

void Macad::Occt::SelectMgr_SelectableObject::UpdateTransformations(Macad::Occt::SelectMgr_Selection^ aSelection)
{
	Handle(::SelectMgr_Selection) h_aSelection = aSelection->NativeInstance;
	((::SelectMgr_SelectableObject*)_NativeInstance)->UpdateTransformations(h_aSelection);
	aSelection->NativeInstance = h_aSelection.get();
}

void Macad::Occt::SelectMgr_SelectableObject::ClearSelected()
{
	((::SelectMgr_SelectableObject*)_NativeInstance)->ClearSelected();
}

bool Macad::Occt::SelectMgr_SelectableObject::IsAutoHilight()
{
	return ((::SelectMgr_SelectableObject*)_NativeInstance)->IsAutoHilight();
}

void Macad::Occt::SelectMgr_SelectableObject::SetAutoHilight(bool theAutoHilight)
{
	((::SelectMgr_SelectableObject*)_NativeInstance)->SetAutoHilight(theAutoHilight);
}

void Macad::Occt::SelectMgr_SelectableObject::ErasePresentations(bool theToRemove)
{
	((::SelectMgr_SelectableObject*)_NativeInstance)->ErasePresentations(theToRemove);
}

void Macad::Occt::SelectMgr_SelectableObject::SetZLayer(int theLayerId)
{
	((::SelectMgr_SelectableObject*)_NativeInstance)->SetZLayer(theLayerId);
}

void Macad::Occt::SelectMgr_SelectableObject::UpdateSelection(int theMode)
{
	((::SelectMgr_SelectableObject*)_NativeInstance)->UpdateSelection(theMode);
}

void Macad::Occt::SelectMgr_SelectableObject::UpdateSelection()
{
	((::SelectMgr_SelectableObject*)_NativeInstance)->UpdateSelection(-1);
}

void Macad::Occt::SelectMgr_SelectableObject::SetAssemblyOwner(Macad::Occt::SelectMgr_EntityOwner^ theOwner, int theMode)
{
	Handle(::SelectMgr_EntityOwner) h_theOwner = theOwner->NativeInstance;
	((::SelectMgr_SelectableObject*)_NativeInstance)->SetAssemblyOwner(h_theOwner, theMode);
	theOwner->NativeInstance = h_theOwner.get();
}

void Macad::Occt::SelectMgr_SelectableObject::SetAssemblyOwner(Macad::Occt::SelectMgr_EntityOwner^ theOwner)
{
	Handle(::SelectMgr_EntityOwner) h_theOwner = theOwner->NativeInstance;
	((::SelectMgr_SelectableObject*)_NativeInstance)->SetAssemblyOwner(h_theOwner, -1);
	theOwner->NativeInstance = h_theOwner.get();
}

int Macad::Occt::SelectMgr_SelectableObject::GlobalSelectionMode()
{
	return ((::SelectMgr_SelectableObject*)_NativeInstance)->GlobalSelectionMode();
}

Macad::Occt::SelectMgr_EntityOwner^ Macad::Occt::SelectMgr_SelectableObject::GlobalSelOwner()
{
	Handle(::SelectMgr_EntityOwner) _result;
	_result = ((::SelectMgr_SelectableObject*)_NativeInstance)->GlobalSelOwner();
	 return _result.IsNull() ? nullptr : Macad::Occt::SelectMgr_EntityOwner::CreateDowncasted( _result.get());
}

Macad::Occt::SelectMgr_EntityOwner^ Macad::Occt::SelectMgr_SelectableObject::GetAssemblyOwner()
{
	Handle(::SelectMgr_EntityOwner) _result;
	_result = ((::SelectMgr_SelectableObject*)_NativeInstance)->GetAssemblyOwner();
	 return _result.IsNull() ? nullptr : Macad::Occt::SelectMgr_EntityOwner::CreateDowncasted( _result.get());
}


Macad::Occt::SelectMgr_SelectableObject^ Macad::Occt::SelectMgr_SelectableObject::CreateDowncasted(::SelectMgr_SelectableObject* instance)
{
	if( instance == nullptr )
		return nullptr;

	if (instance->IsKind(STANDARD_TYPE(::AIS_InteractiveObject)))
		return Macad::Occt::AIS_InteractiveObject::CreateDowncasted((::AIS_InteractiveObject*)instance);

	return gcnew Macad::Occt::SelectMgr_SelectableObject( instance );
}



//---------------------------------------------------------------------
//  Class  SelectMgr_SortCriterion
//---------------------------------------------------------------------

Macad::Occt::SelectMgr_SortCriterion::SelectMgr_SortCriterion()
	: BaseClass<::SelectMgr_SortCriterion>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::SelectMgr_SortCriterion();
}

Macad::Occt::SelectMgr_SortCriterion::SelectMgr_SortCriterion(Macad::Occt::SelectMgr_SortCriterion^ parameter1)
	: BaseClass<::SelectMgr_SortCriterion>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::SelectMgr_SortCriterion(*(::SelectMgr_SortCriterion*)parameter1->NativeInstance);
}

bool Macad::Occt::SelectMgr_SortCriterion::IsCloserDepth(Macad::Occt::SelectMgr_SortCriterion^ theOther)
{
	return ((::SelectMgr_SortCriterion*)_NativeInstance)->IsCloserDepth(*(::SelectMgr_SortCriterion*)theOther->NativeInstance);
}

bool Macad::Occt::SelectMgr_SortCriterion::IsHigherPriority(Macad::Occt::SelectMgr_SortCriterion^ theOther)
{
	return ((::SelectMgr_SortCriterion*)_NativeInstance)->IsHigherPriority(*(::SelectMgr_SortCriterion*)theOther->NativeInstance);
}




//---------------------------------------------------------------------
//  Class  SelectMgr_OrFilter
//---------------------------------------------------------------------

Macad::Occt::SelectMgr_OrFilter::SelectMgr_OrFilter()
	: Macad::Occt::SelectMgr_CompositionFilter(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::SelectMgr_OrFilter();
}

Macad::Occt::SelectMgr_OrFilter::SelectMgr_OrFilter(Macad::Occt::SelectMgr_OrFilter^ parameter1)
	: Macad::Occt::SelectMgr_CompositionFilter(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::SelectMgr_OrFilter(*(::SelectMgr_OrFilter*)parameter1->NativeInstance);
}

bool Macad::Occt::SelectMgr_OrFilter::IsOk(Macad::Occt::SelectMgr_EntityOwner^ anobj)
{
	Handle(::SelectMgr_EntityOwner) h_anobj = anobj->NativeInstance;
	return ((::SelectMgr_OrFilter*)_NativeInstance)->IsOk(h_anobj);
	anobj->NativeInstance = h_anobj.get();
}


Macad::Occt::SelectMgr_OrFilter^ Macad::Occt::SelectMgr_OrFilter::CreateDowncasted(::SelectMgr_OrFilter* instance)
{
	return gcnew Macad::Occt::SelectMgr_OrFilter( instance );
}



//---------------------------------------------------------------------
//  Class  SelectMgr_SelectableObjectSet
//---------------------------------------------------------------------

Macad::Occt::SelectMgr_SelectableObjectSet::SelectMgr_SelectableObjectSet()
	: BaseClass<::SelectMgr_SelectableObjectSet>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::SelectMgr_SelectableObjectSet();
}

Macad::Occt::SelectMgr_SelectableObjectSet::SelectMgr_SelectableObjectSet(Macad::Occt::SelectMgr_SelectableObjectSet^ parameter1)
	: BaseClass<::SelectMgr_SelectableObjectSet>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::SelectMgr_SelectableObjectSet(*(::SelectMgr_SelectableObjectSet*)parameter1->NativeInstance);
}

bool Macad::Occt::SelectMgr_SelectableObjectSet::Append(Macad::Occt::SelectMgr_SelectableObject^ theObject)
{
	Handle(::SelectMgr_SelectableObject) h_theObject = theObject->NativeInstance;
	return ((::SelectMgr_SelectableObjectSet*)_NativeInstance)->Append(h_theObject);
	theObject->NativeInstance = h_theObject.get();
}

bool Macad::Occt::SelectMgr_SelectableObjectSet::Remove(Macad::Occt::SelectMgr_SelectableObject^ theObject)
{
	Handle(::SelectMgr_SelectableObject) h_theObject = theObject->NativeInstance;
	return ((::SelectMgr_SelectableObjectSet*)_NativeInstance)->Remove(h_theObject);
	theObject->NativeInstance = h_theObject.get();
}

void Macad::Occt::SelectMgr_SelectableObjectSet::ChangeSubset(Macad::Occt::SelectMgr_SelectableObject^ theObject)
{
	Handle(::SelectMgr_SelectableObject) h_theObject = theObject->NativeInstance;
	((::SelectMgr_SelectableObjectSet*)_NativeInstance)->ChangeSubset(h_theObject);
	theObject->NativeInstance = h_theObject.get();
}

void Macad::Occt::SelectMgr_SelectableObjectSet::UpdateBVH(Macad::Occt::Graphic3d_Camera^ theCam, Macad::Occt::Graphic3d_Vec2i^ theWinSize)
{
	Handle(::Graphic3d_Camera) h_theCam = theCam->NativeInstance;
	((::SelectMgr_SelectableObjectSet*)_NativeInstance)->UpdateBVH(h_theCam, *(::Graphic3d_Vec2i*)theWinSize->NativeInstance);
	theCam->NativeInstance = h_theCam.get();
}

void Macad::Occt::SelectMgr_SelectableObjectSet::MarkDirty()
{
	((::SelectMgr_SelectableObjectSet*)_NativeInstance)->MarkDirty();
}

bool Macad::Occt::SelectMgr_SelectableObjectSet::Contains(Macad::Occt::SelectMgr_SelectableObject^ theObject)
{
	Handle(::SelectMgr_SelectableObject) h_theObject = theObject->NativeInstance;
	return ((::SelectMgr_SelectableObjectSet*)_NativeInstance)->Contains(h_theObject);
	theObject->NativeInstance = h_theObject.get();
}

bool Macad::Occt::SelectMgr_SelectableObjectSet::IsEmpty()
{
	return ((::SelectMgr_SelectableObjectSet*)_NativeInstance)->IsEmpty();
}

bool Macad::Occt::SelectMgr_SelectableObjectSet::IsEmpty(Macad::Occt::SelectMgr_SelectableObjectSet::BVHSubset theSubset)
{
	return ((::SelectMgr_SelectableObjectSet*)_NativeInstance)->IsEmpty((::SelectMgr_SelectableObjectSet::BVHSubset)theSubset);
}

Macad::Occt::SelectMgr_SelectableObject^ Macad::Occt::SelectMgr_SelectableObjectSet::GetObjectById(Macad::Occt::SelectMgr_SelectableObjectSet::BVHSubset theSubset, int theIndex)
{
	Handle(::SelectMgr_SelectableObject) _result;
	_result = ((::SelectMgr_SelectableObjectSet*)_NativeInstance)->GetObjectById((::SelectMgr_SelectableObjectSet::BVHSubset)theSubset, theIndex);
	 return _result.IsNull() ? nullptr : Macad::Occt::SelectMgr_SelectableObject::CreateDowncasted( _result.get());
}




//---------------------------------------------------------------------
//  Class  SelectMgr_ViewerSelector
//---------------------------------------------------------------------

Macad::Occt::SelectMgr_ViewerSelector::SelectMgr_ViewerSelector()
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::SelectMgr_ViewerSelector();
}

Macad::Occt::SelectMgr_ViewerSelector::SelectMgr_ViewerSelector(Macad::Occt::SelectMgr_ViewerSelector^ parameter1)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::SelectMgr_ViewerSelector(*(::SelectMgr_ViewerSelector*)parameter1->NativeInstance);
}

int Macad::Occt::SelectMgr_ViewerSelector::CustomPixelTolerance()
{
	return ((::SelectMgr_ViewerSelector*)_NativeInstance)->CustomPixelTolerance();
}

void Macad::Occt::SelectMgr_ViewerSelector::SetPixelTolerance(int theTolerance)
{
	((::SelectMgr_ViewerSelector*)_NativeInstance)->SetPixelTolerance(theTolerance);
}

double Macad::Occt::SelectMgr_ViewerSelector::Sensitivity()
{
	return ((::SelectMgr_ViewerSelector*)_NativeInstance)->Sensitivity();
}

int Macad::Occt::SelectMgr_ViewerSelector::PixelTolerance()
{
	return ((::SelectMgr_ViewerSelector*)_NativeInstance)->PixelTolerance();
}

void Macad::Occt::SelectMgr_ViewerSelector::SortResult()
{
	((::SelectMgr_ViewerSelector*)_NativeInstance)->SortResult();
}

Macad::Occt::SelectMgr_EntityOwner^ Macad::Occt::SelectMgr_ViewerSelector::OnePicked()
{
	Handle(::SelectMgr_EntityOwner) _result;
	_result = ((::SelectMgr_ViewerSelector*)_NativeInstance)->OnePicked();
	 return _result.IsNull() ? nullptr : Macad::Occt::SelectMgr_EntityOwner::CreateDowncasted( _result.get());
}

bool Macad::Occt::SelectMgr_ViewerSelector::ToPickClosest()
{
	return ((::SelectMgr_ViewerSelector*)_NativeInstance)->ToPickClosest();
}

void Macad::Occt::SelectMgr_ViewerSelector::SetPickClosest(bool theToPreferClosest)
{
	((::SelectMgr_ViewerSelector*)_NativeInstance)->SetPickClosest(theToPreferClosest);
}

Macad::Occt::SelectMgr_TypeOfDepthTolerance Macad::Occt::SelectMgr_ViewerSelector::DepthToleranceType()
{
	return (Macad::Occt::SelectMgr_TypeOfDepthTolerance)((::SelectMgr_ViewerSelector*)_NativeInstance)->DepthToleranceType();
}

double Macad::Occt::SelectMgr_ViewerSelector::DepthTolerance()
{
	return ((::SelectMgr_ViewerSelector*)_NativeInstance)->DepthTolerance();
}

void Macad::Occt::SelectMgr_ViewerSelector::SetDepthTolerance(Macad::Occt::SelectMgr_TypeOfDepthTolerance theType, double theTolerance)
{
	((::SelectMgr_ViewerSelector*)_NativeInstance)->SetDepthTolerance((::SelectMgr_TypeOfDepthTolerance)theType, theTolerance);
}

int Macad::Occt::SelectMgr_ViewerSelector::NbPicked()
{
	return ((::SelectMgr_ViewerSelector*)_NativeInstance)->NbPicked();
}

void Macad::Occt::SelectMgr_ViewerSelector::ClearPicked()
{
	((::SelectMgr_ViewerSelector*)_NativeInstance)->ClearPicked();
}

void Macad::Occt::SelectMgr_ViewerSelector::Clear()
{
	((::SelectMgr_ViewerSelector*)_NativeInstance)->Clear();
}

Macad::Occt::SelectMgr_EntityOwner^ Macad::Occt::SelectMgr_ViewerSelector::Picked(int theRank)
{
	Handle(::SelectMgr_EntityOwner) _result;
	_result = ((::SelectMgr_ViewerSelector*)_NativeInstance)->Picked(theRank);
	 return _result.IsNull() ? nullptr : Macad::Occt::SelectMgr_EntityOwner::CreateDowncasted( _result.get());
}

Macad::Occt::SelectMgr_SortCriterion^ Macad::Occt::SelectMgr_ViewerSelector::PickedData(int theRank)
{
	::SelectMgr_SortCriterion* _result = new ::SelectMgr_SortCriterion();
	*_result =  (::SelectMgr_SortCriterion)((::SelectMgr_ViewerSelector*)_NativeInstance)->PickedData(theRank);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::SelectMgr_SortCriterion(_result);
}

Macad::Occt::Pnt Macad::Occt::SelectMgr_ViewerSelector::PickedPoint(int theRank)
{
	return Macad::Occt::Pnt(((::SelectMgr_ViewerSelector*)_NativeInstance)->PickedPoint(theRank));
}

bool Macad::Occt::SelectMgr_ViewerSelector::RemovePicked(Macad::Occt::SelectMgr_SelectableObject^ theObject)
{
	Handle(::SelectMgr_SelectableObject) h_theObject = theObject->NativeInstance;
	return ((::SelectMgr_ViewerSelector*)_NativeInstance)->RemovePicked(h_theObject);
	theObject->NativeInstance = h_theObject.get();
}

bool Macad::Occt::SelectMgr_ViewerSelector::Contains(Macad::Occt::SelectMgr_SelectableObject^ theObject)
{
	Handle(::SelectMgr_SelectableObject) h_theObject = theObject->NativeInstance;
	return ((::SelectMgr_ViewerSelector*)_NativeInstance)->Contains(h_theObject);
	theObject->NativeInstance = h_theObject.get();
}

bool Macad::Occt::SelectMgr_ViewerSelector::Modes(Macad::Occt::SelectMgr_SelectableObject^ theSelectableObject, Macad::Occt::TColStd_ListOfInteger^ theModeList, Macad::Occt::SelectMgr_StateOfSelection theWantedState)
{
	Handle(::SelectMgr_SelectableObject) h_theSelectableObject = theSelectableObject->NativeInstance;
	return ((::SelectMgr_ViewerSelector*)_NativeInstance)->Modes(h_theSelectableObject, *(::TColStd_ListOfInteger*)theModeList->NativeInstance, (::SelectMgr_StateOfSelection)theWantedState);
	theSelectableObject->NativeInstance = h_theSelectableObject.get();
}

bool Macad::Occt::SelectMgr_ViewerSelector::Modes(Macad::Occt::SelectMgr_SelectableObject^ theSelectableObject, Macad::Occt::TColStd_ListOfInteger^ theModeList)
{
	Handle(::SelectMgr_SelectableObject) h_theSelectableObject = theSelectableObject->NativeInstance;
	return ((::SelectMgr_ViewerSelector*)_NativeInstance)->Modes(h_theSelectableObject, *(::TColStd_ListOfInteger*)theModeList->NativeInstance, SelectMgr_SOS_Any);
	theSelectableObject->NativeInstance = h_theSelectableObject.get();
}

bool Macad::Occt::SelectMgr_ViewerSelector::IsActive(Macad::Occt::SelectMgr_SelectableObject^ theSelectableObject, int theMode)
{
	Handle(::SelectMgr_SelectableObject) h_theSelectableObject = theSelectableObject->NativeInstance;
	return ((::SelectMgr_ViewerSelector*)_NativeInstance)->IsActive(h_theSelectableObject, theMode);
	theSelectableObject->NativeInstance = h_theSelectableObject.get();
}

bool Macad::Occt::SelectMgr_ViewerSelector::IsInside(Macad::Occt::SelectMgr_SelectableObject^ theSelectableObject, int theMode)
{
	Handle(::SelectMgr_SelectableObject) h_theSelectableObject = theSelectableObject->NativeInstance;
	return ((::SelectMgr_ViewerSelector*)_NativeInstance)->IsInside(h_theSelectableObject, theMode);
	theSelectableObject->NativeInstance = h_theSelectableObject.get();
}

Macad::Occt::SelectMgr_StateOfSelection Macad::Occt::SelectMgr_ViewerSelector::Status(Macad::Occt::SelectMgr_Selection^ theSelection)
{
	Handle(::SelectMgr_Selection) h_theSelection = theSelection->NativeInstance;
	return (Macad::Occt::SelectMgr_StateOfSelection)((::SelectMgr_ViewerSelector*)_NativeInstance)->Status(h_theSelection);
	theSelection->NativeInstance = h_theSelection.get();
}

Macad::Occt::TCollection_AsciiString^ Macad::Occt::SelectMgr_ViewerSelector::Status(Macad::Occt::SelectMgr_SelectableObject^ theSelectableObject)
{
	Handle(::SelectMgr_SelectableObject) h_theSelectableObject = theSelectableObject->NativeInstance;
	::TCollection_AsciiString* _result = new ::TCollection_AsciiString();
	*_result = ((::SelectMgr_ViewerSelector*)_NativeInstance)->Status(h_theSelectableObject);
	theSelectableObject->NativeInstance = h_theSelectableObject.get();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TCollection_AsciiString(_result);
}

void Macad::Occt::SelectMgr_ViewerSelector::AddSelectableObject(Macad::Occt::SelectMgr_SelectableObject^ theObject)
{
	Handle(::SelectMgr_SelectableObject) h_theObject = theObject->NativeInstance;
	((::SelectMgr_ViewerSelector*)_NativeInstance)->AddSelectableObject(h_theObject);
	theObject->NativeInstance = h_theObject.get();
}

void Macad::Occt::SelectMgr_ViewerSelector::AddSelectionToObject(Macad::Occt::SelectMgr_SelectableObject^ theObject, Macad::Occt::SelectMgr_Selection^ theSelection)
{
	Handle(::SelectMgr_SelectableObject) h_theObject = theObject->NativeInstance;
	Handle(::SelectMgr_Selection) h_theSelection = theSelection->NativeInstance;
	((::SelectMgr_ViewerSelector*)_NativeInstance)->AddSelectionToObject(h_theObject, h_theSelection);
	theObject->NativeInstance = h_theObject.get();
	theSelection->NativeInstance = h_theSelection.get();
}

void Macad::Occt::SelectMgr_ViewerSelector::MoveSelectableObject(Macad::Occt::SelectMgr_SelectableObject^ theObject)
{
	Handle(::SelectMgr_SelectableObject) h_theObject = theObject->NativeInstance;
	((::SelectMgr_ViewerSelector*)_NativeInstance)->MoveSelectableObject(h_theObject);
	theObject->NativeInstance = h_theObject.get();
}

void Macad::Occt::SelectMgr_ViewerSelector::RemoveSelectableObject(Macad::Occt::SelectMgr_SelectableObject^ theObject)
{
	Handle(::SelectMgr_SelectableObject) h_theObject = theObject->NativeInstance;
	((::SelectMgr_ViewerSelector*)_NativeInstance)->RemoveSelectableObject(h_theObject);
	theObject->NativeInstance = h_theObject.get();
}

void Macad::Occt::SelectMgr_ViewerSelector::RemoveSelectionOfObject(Macad::Occt::SelectMgr_SelectableObject^ theObject, Macad::Occt::SelectMgr_Selection^ theSelection)
{
	Handle(::SelectMgr_SelectableObject) h_theObject = theObject->NativeInstance;
	Handle(::SelectMgr_Selection) h_theSelection = theSelection->NativeInstance;
	((::SelectMgr_ViewerSelector*)_NativeInstance)->RemoveSelectionOfObject(h_theObject, h_theSelection);
	theObject->NativeInstance = h_theObject.get();
	theSelection->NativeInstance = h_theSelection.get();
}

void Macad::Occt::SelectMgr_ViewerSelector::RebuildObjectsTree(bool theIsForce)
{
	((::SelectMgr_ViewerSelector*)_NativeInstance)->RebuildObjectsTree(theIsForce);
}

void Macad::Occt::SelectMgr_ViewerSelector::RebuildObjectsTree()
{
	((::SelectMgr_ViewerSelector*)_NativeInstance)->RebuildObjectsTree(false);
}

void Macad::Occt::SelectMgr_ViewerSelector::RebuildSensitivesTree(Macad::Occt::SelectMgr_SelectableObject^ theObject, bool theIsForce)
{
	Handle(::SelectMgr_SelectableObject) h_theObject = theObject->NativeInstance;
	((::SelectMgr_ViewerSelector*)_NativeInstance)->RebuildSensitivesTree(h_theObject, theIsForce);
	theObject->NativeInstance = h_theObject.get();
}

void Macad::Occt::SelectMgr_ViewerSelector::RebuildSensitivesTree(Macad::Occt::SelectMgr_SelectableObject^ theObject)
{
	Handle(::SelectMgr_SelectableObject) h_theObject = theObject->NativeInstance;
	((::SelectMgr_ViewerSelector*)_NativeInstance)->RebuildSensitivesTree(h_theObject, false);
	theObject->NativeInstance = h_theObject.get();
}

Macad::Occt::SelectMgr_SelectableObjectSet^ Macad::Occt::SelectMgr_ViewerSelector::SelectableObjects()
{
	::SelectMgr_SelectableObjectSet* _result = new ::SelectMgr_SelectableObjectSet();
	*_result =  (::SelectMgr_SelectableObjectSet)((::SelectMgr_ViewerSelector*)_NativeInstance)->SelectableObjects();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::SelectMgr_SelectableObjectSet(_result);
}

void Macad::Occt::SelectMgr_ViewerSelector::ResetSelectionActivationStatus()
{
	((::SelectMgr_ViewerSelector*)_NativeInstance)->ResetSelectionActivationStatus();
}

void Macad::Occt::SelectMgr_ViewerSelector::AllowOverlapDetection(bool theIsToAllow)
{
	((::SelectMgr_ViewerSelector*)_NativeInstance)->AllowOverlapDetection(theIsToAllow);
}

void Macad::Occt::SelectMgr_ViewerSelector::Pick(int theXPix, int theYPix, Macad::Occt::V3d_View^ theView)
{
	Handle(::V3d_View) h_theView = theView->NativeInstance;
	((::SelectMgr_ViewerSelector*)_NativeInstance)->Pick(theXPix, theYPix, h_theView);
	theView->NativeInstance = h_theView.get();
}

void Macad::Occt::SelectMgr_ViewerSelector::Pick(int theXPMin, int theYPMin, int theXPMax, int theYPMax, Macad::Occt::V3d_View^ theView)
{
	Handle(::V3d_View) h_theView = theView->NativeInstance;
	((::SelectMgr_ViewerSelector*)_NativeInstance)->Pick(theXPMin, theYPMin, theXPMax, theYPMax, h_theView);
	theView->NativeInstance = h_theView.get();
}

void Macad::Occt::SelectMgr_ViewerSelector::Pick(Macad::Occt::TColgp_Array1OfPnt2d^ thePolyline, Macad::Occt::V3d_View^ theView)
{
	Handle(::V3d_View) h_theView = theView->NativeInstance;
	((::SelectMgr_ViewerSelector*)_NativeInstance)->Pick(*(::TColgp_Array1OfPnt2d*)thePolyline->NativeInstance, h_theView);
	theView->NativeInstance = h_theView.get();
}

void Macad::Occt::SelectMgr_ViewerSelector::Pick(Macad::Occt::Ax1 theAxis, Macad::Occt::V3d_View^ theView)
{
	pin_ptr<Macad::Occt::Ax1> pp_theAxis = &theAxis;
	Handle(::V3d_View) h_theView = theView->NativeInstance;
	((::SelectMgr_ViewerSelector*)_NativeInstance)->Pick(*(gp_Ax1*)pp_theAxis, h_theView);
	theView->NativeInstance = h_theView.get();
}

bool Macad::Occt::SelectMgr_ViewerSelector::ToPixMap(Macad::Occt::Image_PixMap^ theImage, Macad::Occt::V3d_View^ theView, Macad::Occt::StdSelect_TypeOfSelectionImage theType, int thePickedIndex)
{
	Handle(::V3d_View) h_theView = theView->NativeInstance;
	return ((::SelectMgr_ViewerSelector*)_NativeInstance)->ToPixMap(*(::Image_PixMap*)theImage->NativeInstance, h_theView, (::StdSelect_TypeOfSelectionImage)theType, thePickedIndex);
	theView->NativeInstance = h_theView.get();
}

bool Macad::Occt::SelectMgr_ViewerSelector::ToPixMap(Macad::Occt::Image_PixMap^ theImage, Macad::Occt::V3d_View^ theView, Macad::Occt::StdSelect_TypeOfSelectionImage theType)
{
	Handle(::V3d_View) h_theView = theView->NativeInstance;
	return ((::SelectMgr_ViewerSelector*)_NativeInstance)->ToPixMap(*(::Image_PixMap*)theImage->NativeInstance, h_theView, (::StdSelect_TypeOfSelectionImage)theType, 1);
	theView->NativeInstance = h_theView.get();
}

void Macad::Occt::SelectMgr_ViewerSelector::DisplaySensitive(Macad::Occt::V3d_View^ theView)
{
	Handle(::V3d_View) h_theView = theView->NativeInstance;
	((::SelectMgr_ViewerSelector*)_NativeInstance)->DisplaySensitive(h_theView);
	theView->NativeInstance = h_theView.get();
}

void Macad::Occt::SelectMgr_ViewerSelector::ClearSensitive(Macad::Occt::V3d_View^ theView)
{
	Handle(::V3d_View) h_theView = theView->NativeInstance;
	((::SelectMgr_ViewerSelector*)_NativeInstance)->ClearSensitive(h_theView);
	theView->NativeInstance = h_theView.get();
}

void Macad::Occt::SelectMgr_ViewerSelector::DisplaySensitive(Macad::Occt::SelectMgr_Selection^ theSel, Macad::Occt::Trsf theTrsf, Macad::Occt::V3d_View^ theView, bool theToClearOthers)
{
	Handle(::SelectMgr_Selection) h_theSel = theSel->NativeInstance;
	pin_ptr<Macad::Occt::Trsf> pp_theTrsf = &theTrsf;
	Handle(::V3d_View) h_theView = theView->NativeInstance;
	((::SelectMgr_ViewerSelector*)_NativeInstance)->DisplaySensitive(h_theSel, *(gp_Trsf*)pp_theTrsf, h_theView, theToClearOthers);
	theSel->NativeInstance = h_theSel.get();
	theView->NativeInstance = h_theView.get();
}

void Macad::Occt::SelectMgr_ViewerSelector::DisplaySensitive(Macad::Occt::SelectMgr_Selection^ theSel, Macad::Occt::Trsf theTrsf, Macad::Occt::V3d_View^ theView)
{
	Handle(::SelectMgr_Selection) h_theSel = theSel->NativeInstance;
	pin_ptr<Macad::Occt::Trsf> pp_theTrsf = &theTrsf;
	Handle(::V3d_View) h_theView = theView->NativeInstance;
	((::SelectMgr_ViewerSelector*)_NativeInstance)->DisplaySensitive(h_theSel, *(gp_Trsf*)pp_theTrsf, h_theView, true);
	theSel->NativeInstance = h_theSel.get();
	theView->NativeInstance = h_theView.get();
}

void Macad::Occt::SelectMgr_ViewerSelector::SetToPrebuildBVH(bool theToPrebuild, int theThreadsNum)
{
	((::SelectMgr_ViewerSelector*)_NativeInstance)->SetToPrebuildBVH(theToPrebuild, theThreadsNum);
}

void Macad::Occt::SelectMgr_ViewerSelector::SetToPrebuildBVH(bool theToPrebuild)
{
	((::SelectMgr_ViewerSelector*)_NativeInstance)->SetToPrebuildBVH(theToPrebuild, -1);
}

void Macad::Occt::SelectMgr_ViewerSelector::WaitForBVHBuild()
{
	((::SelectMgr_ViewerSelector*)_NativeInstance)->WaitForBVHBuild();
}

bool Macad::Occt::SelectMgr_ViewerSelector::ToPrebuildBVH()
{
	return ((::SelectMgr_ViewerSelector*)_NativeInstance)->ToPrebuildBVH();
}


Macad::Occt::SelectMgr_ViewerSelector^ Macad::Occt::SelectMgr_ViewerSelector::CreateDowncasted(::SelectMgr_ViewerSelector* instance)
{
	return gcnew Macad::Occt::SelectMgr_ViewerSelector( instance );
}



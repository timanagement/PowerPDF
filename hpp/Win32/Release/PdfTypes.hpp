﻿// CodeGear C++Builder
// Copyright (c) 1995, 2017 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'PdfTypes.pas' rev: 33.00 (Windows)

#ifndef PdftypesHPP
#define PdftypesHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.SysUtils.hpp>
#include <System.Classes.hpp>
#include <Winapi.Windows.hpp>

//-- user supplied -----------------------------------------------------------

namespace Pdftypes
{
//-- forward type declarations -----------------------------------------------
struct TPdfRect;
class DELPHICLASS TPdfObjectMgr;
class DELPHICLASS TPdfObject;
class DELPHICLASS TPdfVirtualObject;
class DELPHICLASS TPdfBoolean;
class DELPHICLASS TPdfNull;
class DELPHICLASS TPdfNumber;
class DELPHICLASS TPdfReal;
class DELPHICLASS TPdfString;
class DELPHICLASS TPdfText;
class DELPHICLASS TPdfName;
class DELPHICLASS TPdfArray;
class DELPHICLASS TPdfDictionaryElement;
class DELPHICLASS TPdfDictionary;
class DELPHICLASS TPdfStream;
class DELPHICLASS TPdfBinary;
class DELPHICLASS TPdfXObject;
class DELPHICLASS TPdfImage;
class DELPHICLASS TPdfOutlines;
class DELPHICLASS EPdfInvalidValue;
class DELPHICLASS EPdfInvalidOperation;
//-- type declarations -------------------------------------------------------
struct DECLSPEC_DRECORD TPdfRect
{
public:
	float Left;
	float Top;
	float Right;
	float Bottom;
};


enum DECLSPEC_DENUM TPdfObjectType : unsigned char { otDirectObject, otIndirectObject, otVirtualObject };

enum DECLSPEC_DENUM TPdfAlignment : unsigned char { paLeftJustify, paRightJustify, paCenter };

#pragma pack(push,4)
class PASCALIMPLEMENTATION TPdfObjectMgr : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	virtual void __fastcall AddObject(TPdfObject* AObject) = 0 ;
	virtual TPdfObject* __fastcall GetObject(int ObjectID) = 0 ;
public:
	/* TObject.Create */ inline __fastcall TPdfObjectMgr() : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TPdfObjectMgr() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TPdfObject : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	TPdfObjectType FObjectType;
	int FObjectNumber;
	int FGenerationNumber;
	
protected:
	virtual void __fastcall InternalWriteStream(System::Classes::TStream* const AStream);
	
public:
	void __fastcall SetObjectNumber(int Value);
	__fastcall virtual TPdfObject();
	void __fastcall WriteToStream(System::Classes::TStream* const AStream);
	void __fastcall WriteValueToStream(System::Classes::TStream* const AStream);
	__property int ObjectNumber = {read=FObjectNumber, nodefault};
	__property int GenerationNumber = {read=FGenerationNumber, nodefault};
	__property TPdfObjectType ObjectType = {read=FObjectType, nodefault};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TPdfObject() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TPdfVirtualObject : public TPdfObject
{
	typedef TPdfObject inherited;
	
public:
	__fastcall virtual TPdfVirtualObject();
	__fastcall TPdfVirtualObject(int AObjectId);
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TPdfVirtualObject() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TPdfBoolean : public TPdfObject
{
	typedef TPdfObject inherited;
	
private:
	bool FValue;
	
protected:
	virtual void __fastcall InternalWriteStream(System::Classes::TStream* const AStream);
	
public:
	__fastcall TPdfBoolean(bool AValue);
	__property bool Value = {read=FValue, write=FValue, nodefault};
public:
	/* TPdfObject.Create */ inline __fastcall virtual TPdfBoolean() : TPdfObject() { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TPdfBoolean() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TPdfNull : public TPdfObject
{
	typedef TPdfObject inherited;
	
protected:
	virtual void __fastcall InternalWriteStream(System::Classes::TStream* const AStream);
public:
	/* TPdfObject.Create */ inline __fastcall virtual TPdfNull() : TPdfObject() { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TPdfNull() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TPdfNumber : public TPdfObject
{
	typedef TPdfObject inherited;
	
private:
	int FValue;
	
protected:
	virtual void __fastcall InternalWriteStream(System::Classes::TStream* const AStream);
	
public:
	__fastcall TPdfNumber(int AValue);
	__property int Value = {read=FValue, write=FValue, nodefault};
public:
	/* TPdfObject.Create */ inline __fastcall virtual TPdfNumber() : TPdfObject() { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TPdfNumber() { }
	
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TPdfReal : public TPdfObject
{
	typedef TPdfObject inherited;
	
private:
	double FValue;
	
protected:
	virtual void __fastcall InternalWriteStream(System::Classes::TStream* const AStream);
	
public:
	__fastcall TPdfReal(double AValue);
	__property double Value = {read=FValue, write=FValue};
public:
	/* TPdfObject.Create */ inline __fastcall virtual TPdfReal() : TPdfObject() { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TPdfReal() { }
	
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TPdfString : public TPdfObject
{
	typedef TPdfObject inherited;
	
private:
	System::UnicodeString FValue;
	
protected:
	virtual void __fastcall InternalWriteStream(System::Classes::TStream* const AStream);
	
public:
	__fastcall TPdfString(System::UnicodeString AValue);
	__property System::UnicodeString Value = {read=FValue, write=FValue};
public:
	/* TPdfObject.Create */ inline __fastcall virtual TPdfString() : TPdfObject() { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TPdfString() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TPdfText : public TPdfObject
{
	typedef TPdfObject inherited;
	
private:
	System::UnicodeString FValue;
	
protected:
	virtual void __fastcall InternalWriteStream(System::Classes::TStream* const AStream);
	
public:
	__fastcall TPdfText(System::UnicodeString AValue);
	__property System::UnicodeString Value = {read=FValue, write=FValue};
public:
	/* TPdfObject.Create */ inline __fastcall virtual TPdfText() : TPdfObject() { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TPdfText() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TPdfName : public TPdfObject
{
	typedef TPdfObject inherited;
	
private:
	System::UnicodeString FValue;
	System::UnicodeString __fastcall EscapeName(const System::UnicodeString Value);
	
protected:
	virtual void __fastcall InternalWriteStream(System::Classes::TStream* const AStream);
	
public:
	__fastcall TPdfName(System::UnicodeString AValue);
	__property System::UnicodeString Value = {read=FValue, write=FValue};
public:
	/* TPdfObject.Create */ inline __fastcall virtual TPdfName() : TPdfObject() { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TPdfName() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TPdfArray : public TPdfObject
{
	typedef TPdfObject inherited;
	
private:
	System::Classes::TList* FArray;
	TPdfObjectMgr* FObjectMgr;
	TPdfObject* __fastcall GetItems(int Index);
	int __fastcall GetItemCount();
	
protected:
	virtual void __fastcall InternalWriteStream(System::Classes::TStream* const AStream);
	
public:
	__fastcall TPdfArray(TPdfObjectMgr* AObjectMgr);
	__fastcall TPdfArray(TPdfObjectMgr* AObjectMgr, int *AArray, const int AArray_High);
	__fastcall virtual ~TPdfArray();
	void __fastcall AddItem(TPdfObject* AItem);
	TPdfName* __fastcall FindName(System::UnicodeString AName);
	bool __fastcall RemoveName(System::UnicodeString AName);
	__property TPdfObject* Items[int Index] = {read=GetItems};
	__property int ItemCount = {read=GetItemCount, nodefault};
	__property TPdfObjectMgr* ObjectMgr = {read=FObjectMgr};
public:
	/* TPdfObject.Create */ inline __fastcall virtual TPdfArray() : TPdfObject() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TPdfDictionaryElement : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	TPdfName* FKey;
	TPdfObject* FValue;
	bool FIsInternal;
	System::UnicodeString __fastcall GetKey();
	
public:
	__fastcall TPdfDictionaryElement(System::UnicodeString AKey, TPdfObject* AValue);
	__fastcall TPdfDictionaryElement(System::UnicodeString AKey, TPdfObject* AValue, void * AVoid);
	__fastcall virtual ~TPdfDictionaryElement();
	__property System::UnicodeString Key = {read=GetKey};
	__property TPdfObject* Value = {read=FValue};
	__property bool IsInternal = {read=FIsInternal, nodefault};
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TPdfDictionary : public TPdfObject
{
	typedef TPdfObject inherited;
	
private:
	System::Classes::TList* FArray;
	TPdfObjectMgr* FObjectMgr;
	TPdfDictionaryElement* __fastcall GetItems(int Index);
	int __fastcall GetItemCount();
	
protected:
	virtual void __fastcall InternalWriteStream(System::Classes::TStream* const AStream);
	
public:
	__fastcall TPdfDictionary(TPdfObjectMgr* AObjectMgr);
	__fastcall virtual ~TPdfDictionary();
	TPdfObject* __fastcall ValueByName(System::UnicodeString AKey);
	TPdfBoolean* __fastcall PdfBooleanByName(System::UnicodeString AKey);
	TPdfNumber* __fastcall PdfNumberByName(System::UnicodeString AKey);
	TPdfText* __fastcall PdfTextByName(System::UnicodeString AKey);
	TPdfReal* __fastcall PdfRealByName(System::UnicodeString AKey);
	TPdfString* __fastcall PdfStringByName(System::UnicodeString AKey);
	TPdfName* __fastcall PdfNameByName(System::UnicodeString AKey);
	TPdfDictionary* __fastcall PdfDictionaryByName(System::UnicodeString AKey);
	TPdfArray* __fastcall PdfArrayByName(System::UnicodeString AKey);
	void __fastcall AddItem(System::UnicodeString AKey, TPdfObject* AValue);
	void __fastcall AddNumberItem(System::UnicodeString AKey, int AValue);
	void __fastcall AddNameItem(System::UnicodeString AKey, System::UnicodeString AValue);
	void __fastcall AddInternalItem(System::UnicodeString AKey, TPdfObject* AValue);
	void __fastcall RemoveItem(System::UnicodeString AKey);
	__property TPdfDictionaryElement* Items[int Index] = {read=GetItems};
	__property int ItemCount = {read=GetItemCount, nodefault};
	__property TPdfObjectMgr* ObjectMgr = {read=FObjectMgr};
public:
	/* TPdfObject.Create */ inline __fastcall virtual TPdfDictionary() : TPdfObject() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TPdfStream : public TPdfObject
{
	typedef TPdfObject inherited;
	
private:
	TPdfDictionary* FAttributes;
	System::Classes::TStream* FStream;
	
protected:
	virtual void __fastcall InternalWriteStream(System::Classes::TStream* const AStream);
	
public:
	__fastcall TPdfStream(TPdfObjectMgr* AObjectMgr);
	__fastcall virtual ~TPdfStream();
	__property TPdfDictionary* Attributes = {read=FAttributes};
	__property System::Classes::TStream* Stream = {read=FStream};
public:
	/* TPdfObject.Create */ inline __fastcall virtual TPdfStream() : TPdfObject() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TPdfBinary : public TPdfObject
{
	typedef TPdfObject inherited;
	
private:
	System::Classes::TStream* FStream;
	
protected:
	virtual void __fastcall InternalWriteStream(System::Classes::TStream* const AStream);
	
public:
	__fastcall virtual TPdfBinary();
	__fastcall virtual ~TPdfBinary();
	__property System::Classes::TStream* Stream = {read=FStream};
};

#pragma pack(pop)

typedef System::UnicodeString TPdfDate;

#pragma pack(push,4)
class PASCALIMPLEMENTATION TPdfXObject : public TPdfStream
{
	typedef TPdfStream inherited;
	
public:
	/* TPdfStream.CreateStream */ inline __fastcall TPdfXObject(TPdfObjectMgr* AObjectMgr) : TPdfStream(AObjectMgr) { }
	/* TPdfStream.Destroy */ inline __fastcall virtual ~TPdfXObject() { }
	
public:
	/* TPdfObject.Create */ inline __fastcall virtual TPdfXObject() : TPdfStream() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TPdfImage : public TPdfXObject
{
	typedef TPdfXObject inherited;
	
public:
	/* TPdfStream.CreateStream */ inline __fastcall TPdfImage(TPdfObjectMgr* AObjectMgr) : TPdfXObject(AObjectMgr) { }
	/* TPdfStream.Destroy */ inline __fastcall virtual ~TPdfImage() { }
	
public:
	/* TPdfObject.Create */ inline __fastcall virtual TPdfImage() : TPdfXObject() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TPdfOutlines : public TPdfDictionary
{
	typedef TPdfDictionary inherited;
	
public:
	/* TPdfDictionary.CreateDictionary */ inline __fastcall TPdfOutlines(TPdfObjectMgr* AObjectMgr) : TPdfDictionary(AObjectMgr) { }
	/* TPdfDictionary.Destroy */ inline __fastcall virtual ~TPdfOutlines() { }
	
public:
	/* TPdfObject.Create */ inline __fastcall virtual TPdfOutlines() : TPdfDictionary() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION EPdfInvalidValue : public System::Sysutils::Exception
{
	typedef System::Sysutils::Exception inherited;
	
public:
	/* Exception.Create */ inline __fastcall EPdfInvalidValue(const System::UnicodeString Msg) : System::Sysutils::Exception(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall EPdfInvalidValue(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : System::Sysutils::Exception(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EPdfInvalidValue(NativeUInt Ident)/* overload */ : System::Sysutils::Exception(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EPdfInvalidValue(System::PResStringRec ResStringRec)/* overload */ : System::Sysutils::Exception(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EPdfInvalidValue(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EPdfInvalidValue(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EPdfInvalidValue(const System::UnicodeString Msg, int AHelpContext) : System::Sysutils::Exception(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EPdfInvalidValue(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : System::Sysutils::Exception(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EPdfInvalidValue(NativeUInt Ident, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EPdfInvalidValue(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EPdfInvalidValue(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EPdfInvalidValue(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EPdfInvalidValue() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION EPdfInvalidOperation : public System::Sysutils::Exception
{
	typedef System::Sysutils::Exception inherited;
	
public:
	/* Exception.Create */ inline __fastcall EPdfInvalidOperation(const System::UnicodeString Msg) : System::Sysutils::Exception(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall EPdfInvalidOperation(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : System::Sysutils::Exception(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EPdfInvalidOperation(NativeUInt Ident)/* overload */ : System::Sysutils::Exception(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EPdfInvalidOperation(System::PResStringRec ResStringRec)/* overload */ : System::Sysutils::Exception(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EPdfInvalidOperation(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EPdfInvalidOperation(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EPdfInvalidOperation(const System::UnicodeString Msg, int AHelpContext) : System::Sysutils::Exception(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EPdfInvalidOperation(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : System::Sysutils::Exception(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EPdfInvalidOperation(NativeUInt Ident, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EPdfInvalidOperation(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EPdfInvalidOperation(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EPdfInvalidOperation(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EPdfInvalidOperation() { }
	
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
static const bool USE_ZLIB = false;
static const System::WideChar PDF_IN_USE_ENTRY = (System::WideChar)(0x6e);
static const System::WideChar PDF_FREE_ENTRY = (System::WideChar)(0x66);
static const System::Word PDF_MAX_GENERATION_NUM = System::Word(0xffff);
static const System::Int8 PDF_ENTRY_CLOSED = System::Int8(0x0);
static const System::Int8 PDF_ENTRY_OPENED = System::Int8(0x1);
#define CRLF L"\r\n"
static const System::WideChar LF = (System::WideChar)(0xa);
#define PDF_UNICODE_HEADER L"FEFF001B%s001B"
#define PDF_LANG_STRING L"en"
extern DELPHI_PACKAGE System::UnicodeString __fastcall _DateTimeToPdfDate(System::TDateTime ADate);
extern DELPHI_PACKAGE System::TDateTime __fastcall _PdfDateToDateTime(System::UnicodeString AText);
extern DELPHI_PACKAGE System::UnicodeString __fastcall _StrToUnicodeHex(const System::UnicodeString Value);
extern DELPHI_PACKAGE System::UnicodeString __fastcall _StrToHex(const System::UnicodeString Value);
extern DELPHI_PACKAGE bool __fastcall _HasMultiByteString(const System::UnicodeString Value);
extern DELPHI_PACKAGE System::UnicodeString __fastcall _EscapeText(const System::UnicodeString Value);
extern DELPHI_PACKAGE System::UnicodeString __fastcall _GetTypeOf(TPdfDictionary* ADictionary);
extern DELPHI_PACKAGE void __fastcall _WriteString(const System::UnicodeString Value, System::Classes::TStream* AStream);
extern DELPHI_PACKAGE System::UnicodeString __fastcall _FloatToStrR(System::Extended Value);
extern DELPHI_PACKAGE System::UnicodeString __fastcall _GetUnicodeHeader();
extern DELPHI_PACKAGE TPdfRect __fastcall _PdfRect(float Left, float Top, float Right, float Bottom);
extern DELPHI_PACKAGE int __fastcall _GetCharCount(System::UnicodeString Text);
}	/* namespace Pdftypes */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_PDFTYPES)
using namespace Pdftypes;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// PdftypesHPP

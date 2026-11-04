// rea decompile_all
// name: SERestoreInfo::IcefallDeliveryObject::updateVersionDict
// address: 0x254622
// body: available
// range: 0x254622-0x254787 inclusive
// range: 0x25478a-0x2547fa inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x254783 to 0x2aa03e ___cxa_throw (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x2547f6 to 0x2aa03e ___cxa_throw (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* SERestoreInfo::IcefallDeliveryObject::updateVersionDict(__CFDictionary*, __CFError**) const */

undefined8 __thiscall
SERestoreInfo::IcefallDeliveryObject::updateVersionDict
          (IcefallDeliveryObject *this,__CFDictionary *param_1,__CFError **param_2)

{
  byte bVar1;
  int iVar2;
  long lVar3;
  byte *pbVar4;
  undefined8 *puVar5;
  runtime_error *prVar6;
  char local_70 [8];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  __CFDictionary *local_50;
  char local_48 [24];
  
  if ((param_1 != (__CFDictionary *)0x0) && (param_2 != (__CFError **)0x0)) {
    local_70[4] = '\0';
    local_70[5] = '\0';
    local_70[0] = '\0';
    local_70[1] = '\0';
    local_70[2] = '\0';
    local_70[3] = '\0';
    local_68._0_4_ = 2;
    local_50 = param_1;
    lVar3 = std::
            map<ImageType_t,unsigned_short,std::less<ImageType_t>,std::allocator<std::pair<ImageType_t_const,unsigned_short>>>
            ::at((map<ImageType_t,unsigned_short,std::less<ImageType_t>,std::allocator<std::pair<ImageType_t_const,unsigned_short>>>
                  *)(this + 0x38),(ImageType_t *)&local_68);
    bVar1 = *(byte *)(lVar3 + 1);
    local_68 = CONCAT44(local_68._4_4_,2);
    pbVar4 = (byte *)std::
                     map<ImageType_t,unsigned_short,std::less<ImageType_t>,std::allocator<std::pair<ImageType_t_const,unsigned_short>>>
                     ::at((map<ImageType_t,unsigned_short,std::less<ImageType_t>,std::allocator<std::pair<ImageType_t_const,unsigned_short>>>
                           *)(this + 0x38),(ImageType_t *)&local_68);
    iVar2 = _snprintf(local_70,6,"%d.%d",(ulong)*pbVar4,(ulong)bVar1);
    if (0xfffffffa < iVar2 - 6U) {
      lVar3 = _CFStringCreateWithBytes(0,local_70,iVar2,0x8000100,0);
      if (this[0x50] == (IcefallDeliveryObject)0x0) {
        puVar5 = &_kSETagVersionProd;
      }
      else {
        puVar5 = &_kSETagVersionDev;
      }
      _CFDictionarySetValue(local_50,*puVar5,lVar3);
      if (lVar3 != 0) {
        _CFRelease(lVar3);
      }
      return 1;
    }
    prVar6 = (runtime_error *)___cxa_allocate_exception(0x10);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8ne190102ILi0EEEPKc
              (local_48,"Assertion: ");
    puVar5 = (undefined8 *)std::string::append(local_48);
    local_58 = puVar5[2];
    local_68 = *puVar5;
    uStack_60 = puVar5[1];
    *puVar5 = 0;
    puVar5[1] = 0;
    puVar5[2] = 0;
    std::runtime_error::runtime_error(prVar6,(string *)&local_68);
                    /* WARNING: Subroutine does not return */
    ___cxa_throw(prVar6,PTR_typeinfo_00441260,PTR__runtime_error_00441248);
  }
  prVar6 = (runtime_error *)___cxa_allocate_exception(0x10);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8ne190102ILi0EEEPKc
            (local_48,"Assertion: ");
  puVar5 = (undefined8 *)std::string::append(local_48);
  local_58 = puVar5[2];
  local_68 = *puVar5;
  uStack_60 = puVar5[1];
  *puVar5 = 0;
  puVar5[1] = 0;
  puVar5[2] = 0;
  std::runtime_error::runtime_error(prVar6,(string *)&local_68);
                    /* WARNING: Subroutine does not return */
  ___cxa_throw(prVar6,PTR_typeinfo_00441260,PTR__runtime_error_00441248);
}


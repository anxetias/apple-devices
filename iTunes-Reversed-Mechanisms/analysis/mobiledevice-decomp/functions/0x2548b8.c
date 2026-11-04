// rea decompile_all
// name: SERestoreInfo::IcefallFirmware::makeDeliveryObject
// address: 0x2548b8
// body: available
// range: 0x2548b8-0x254d02 inclusive
// range: 0x254d05-0x254d50 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x254cfe to 0x2aa03e ___cxa_throw (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x254d4c to 0x2aa03e ___cxa_throw (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* SERestoreInfo::IcefallFirmware::makeDeliveryObject(DERItem const&) const */

DERItem * SERestoreInfo::IcefallFirmware::makeDeliveryObject(DERItem *param_1)

{
  IcefallDeliveryObject *pIVar1;
  int iVar2;
  undefined8 *puVar3;
  SEException *pSVar4;
  char *local_1b0;
  long local_1a8;
  long local_190;
  long local_188;
  long local_180;
  long local_178;
  char *local_170;
  undefined1 *local_160;
  ulong local_158;
  undefined1 local_150 [16];
  long local_140;
  long local_138;
  long local_130;
  long local_128;
  undefined1 local_120 [16];
  long local_110;
  long local_108;
  long local_100;
  long local_f8;
  undefined1 local_f0 [16];
  long local_e0;
  long local_d8;
  long local_d0;
  long local_c8;
  long local_c0;
  long local_b8;
  long local_b0 [2];
  long local_a0;
  long local_98;
  long local_90;
  long local_88;
  undefined1 local_70 [16];
  undefined1 local_60 [16];
  IcefallDeliveryObject *local_50;
  undefined8 *local_48;
  string local_40 [24];
  
  puVar3 = operator_new(0xb0);
  puVar3[1] = 0;
  puVar3[2] = 0;
  *puVar3 = &PTR____shared_ptr_emplace_0044f468;
  pIVar1 = (IcefallDeliveryObject *)(puVar3 + 3);
  puVar3[0xd] = 0;
  puVar3[0xe] = 0;
  puVar3[0x11] = 0;
  puVar3[0x12] = 0;
  puVar3[0xf] = 0;
  puVar3[0x10] = 0;
  puVar3[0x13] = 0;
  puVar3[0x14] = 0;
  puVar3[3] = &PTR__IcefallDeliveryObject_0044f410;
  puVar3[5] = 0;
  puVar3[6] = 0;
  puVar3[4] = puVar3 + 5;
  puVar3[8] = 0;
  puVar3[9] = 0;
  puVar3[7] = puVar3 + 8;
  puVar3[0xb] = 0;
  puVar3[0xc] = 0;
  puVar3[10] = puVar3 + 0xb;
  *(undefined1 *)(puVar3 + 0xd) = 1;
  puVar3[0xe] = &PTR__BLOB_0044f1c8;
  puVar3[0x12] = &PTR__BLOB_0044f1c8;
  puVar3[0x15] = 0;
  local_50 = pIVar1;
  local_48 = puVar3;
  iVar2 = _DERParseSequenceContent();
  if (iVar2 != 0) {
    pSVar4 = (SEException *)___cxa_allocate_exception(0x48);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8ne190102ILi0EEEPKc
              (local_40,"Fail to parse IcefallFW per DeliveryObjectItemSpec.");
    SEException::SEException(pSVar4,local_40,iVar2,(__CFString *)&cf_libDERErrorDomain);
                    /* WARNING: Subroutine does not return */
    ___cxa_throw(pSVar4,&SEException::typeinfo,SEException::~SEException);
  }
  if (local_1a8 == 2) {
    if ((((((local_158 < 2 || local_160 == (undefined1 *)0x0) && (*local_1b0 == '\0')) &&
          (6 < (byte)local_1b0[1])) &&
         (((local_188 == 0x20 && (local_190 != 0)) &&
          ((local_178 == 0x20 && ((local_180 != 0 && (local_138 == 0x10)))))))) &&
        ((local_140 != 0 &&
         (((((local_108 == 0x10 && (local_110 != 0)) && (local_98 == 0x10)) &&
           ((local_a0 != 0 && (local_128 == 2)))) &&
          ((local_130 != 0 && ((local_f8 == 2 && (local_100 != 0)))))))))) &&
       ((local_88 == 2 &&
        ((local_90 != 0 &&
         (((local_b8 == 0 || (local_c0 == 0)) ||
          ((local_d8 == 0x10 && (((local_e0 != 0 && (local_c8 == 2)) && (local_d0 != 0)))))))))))) {
      *(bool *)(puVar3 + 0xd) = *local_170 == '\0';
      puVar3[0xf] = local_180;
      puVar3[0x10] = 0x20;
      puVar3[0x13] = local_190;
      puVar3[0x14] = 0x20;
      if (local_158 != 0 && local_160 != (undefined1 *)0x0) {
        *(undefined1 *)((long)puVar3 + 0x69) = *local_160;
      }
      IcefallDeliveryObject::addMac(pIVar1,0);
      IcefallDeliveryObject::addImageVersion(pIVar1,0,&local_130);
      IcefallDeliveryObject::addMac(pIVar1,4,&local_110);
      IcefallDeliveryObject::addImageVersion(pIVar1,4,&local_100);
      IcefallDeliveryObject::addMac(pIVar1,2,&local_a0);
      IcefallDeliveryObject::addImageVersion(pIVar1,2,&local_90);
      if (local_e0 != 0) {
        IcefallDeliveryObject::addMac(pIVar1,3,&local_e0);
        IcefallDeliveryObject::addImageVersion(pIVar1,3,&local_d0);
      }
      IcefallDeliveryObject::addApdu(pIVar1,6,local_150);
      IcefallDeliveryObject::addApdu(pIVar1,8,local_60);
      if (local_b0[0] != 0) {
        IcefallDeliveryObject::addApdu(pIVar1,7,local_b0);
      }
      IcefallDeliveryObject::addApdu(pIVar1,0,local_120);
      IcefallDeliveryObject::addApdu(pIVar1,4,local_f0);
      IcefallDeliveryObject::addApdu(pIVar1,2,local_70);
      if (local_c0 != 0) {
        IcefallDeliveryObject::addApdu(pIVar1,3,&local_c0);
      }
      *(IcefallDeliveryObject **)param_1 = pIVar1;
      *(undefined8 **)(param_1 + 8) = puVar3;
      return param_1;
    }
  }
  pSVar4 = (SEException *)___cxa_allocate_exception(0x48);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8ne190102ILi0EEEPKc
            (local_40,"Fail to validate delivery object.");
  SEException::SEException(pSVar4,local_40,0xf,(__CFString *)&cf_SEUpdaterErrorDomain);
                    /* WARNING: Subroutine does not return */
  ___cxa_throw(pSVar4,&SEException::typeinfo,SEException::~SEException);
}


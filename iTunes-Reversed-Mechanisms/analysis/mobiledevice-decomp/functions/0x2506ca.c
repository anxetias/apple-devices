// rea decompile_all
// name: SERestoreInfo::P73BaseFirmware::makeDeliveryObject
// address: 0x2506ca
// body: available
// range: 0x2506ca-0x250ec7 inclusive
// range: 0x250ecd-0x250f40 inclusive
// range: 0x250f46-0x250fbc inclusive
// range: 0x250fc2-0x250fca inclusive
// range: 0x250fd0-0x251021 inclusive
// range: 0x251027-0x251078 inclusive
// range: 0x25107e-0x2510cf inclusive
// range: 0x2510d5-0x251126 inclusive
// range: 0x25112c-0x251177 inclusive
// range: 0x25117d-0x2511ce inclusive
// range: 0x2511d4-0x251225 inclusive
// range: 0x25122b-0x25127c inclusive
// range: 0x251282-0x2512d3 inclusive
// range: 0x2512d9-0x251325 inclusive
// range: 0x25132b-0x251378 inclusive
// range: 0x25137e-0x2513c8 inclusive
// range: 0x2513ce-0x251418 inclusive
// range: 0x25141e-0x251468 inclusive
// range: 0x25146e-0x2514b8 inclusive
// range: 0x2514bb-0x251505 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x250ec3 to 0x2aa03e ___cxa_throw (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x250f3c to 0x2aa03e ___cxa_throw (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x250fb8 to 0x2aa03e ___cxa_throw (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x250fc6 to 0x2165ea std::vector<std::string,std::allocator<std::string>>::__throw_length_error[abi:ne190102] (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x25101d to 0x2aa03e ___cxa_throw (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x251074 to 0x2aa03e ___cxa_throw (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x2510cb to 0x2aa03e ___cxa_throw (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x251122 to 0x2aa03e ___cxa_throw (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x251173 to 0x2aa03e ___cxa_throw (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x2511ca to 0x2aa03e ___cxa_throw (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x251221 to 0x2aa03e ___cxa_throw (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x251278 to 0x2aa03e ___cxa_throw (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's Functi
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


/* SERestoreInfo::P73BaseFirmware::makeDeliveryObject(DERItem const&) const */

void SERestoreInfo::P73BaseFirmware::makeDeliveryObject(DERItem *param_1)

{
  ulong uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 **ppuVar5;
  undefined1 uVar6;
  int iVar7;
  undefined ***pppuVar8;
  SEException *pSVar9;
  runtime_error *prVar10;
  undefined8 *puVar11;
  undefined ***pppuVar12;
  long *in_RDX;
  long lVar13;
  undefined ***pppuVar14;
  ulong uVar15;
  undefined ***pppuVar16;
  undefined ***pppuVar17;
  undefined1 auVar18 [16];
  undefined1 local_2a0 [16];
  undefined1 local_290 [32];
  undefined1 local_270 [16];
  undefined1 local_260 [16];
  undefined1 local_250 [8];
  undefined8 *local_248;
  undefined8 *puStack_240;
  DERItem local_238 [16];
  undefined1 local_228 [16];
  undefined **local_218;
  undefined4 local_210;
  undefined4 uStack_20c;
  undefined4 uStack_208;
  undefined4 uStack_204;
  undefined8 local_200;
  undefined1 local_1f8 [16];
  undefined1 local_1e8 [16];
  int *local_1d8;
  long local_1d0;
  undefined1 local_1c8 [16];
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  uchar *local_1a8;
  long local_1a0;
  undefined **local_198;
  undefined8 uStack_190;
  undefined **local_188;
  undefined8 uStack_180;
  long local_178;
  long local_170;
  undefined8 *local_160;
  undefined8 *local_158;
  undefined4 local_150 [2];
  undefined1 local_148 [16];
  undefined **local_138;
  undefined8 *local_130;
  undefined8 *puStack_128;
  undefined8 *local_120;
  uint *local_118;
  BLOB *local_110;
  DERItem *local_108;
  undefined8 *local_100;
  undefined ***local_f8 [2];
  undefined8 **local_e8;
  undefined8 **ppuStack_e0;
  undefined1 local_d8 [16];
  undefined1 local_c8 [20];
  uint local_b4;
  undefined ***local_b0;
  undefined8 **local_a8;
  undefined8 **ppuStack_a0;
  undefined8 **local_98;
  allocator *local_90;
  undefined8 local_88;
  undefined **ppuStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined4 local_60 [2];
  undefined8 **local_58;
  undefined8 **ppuStack_50;
  undefined8 **local_48 [2];
  undefined8 *local_38;
  
  local_108 = param_1;
  if ((*in_RDX == 0) || (in_RDX[1] == 0)) {
    prVar10 = (runtime_error *)___cxa_allocate_exception(0x10);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8ne190102ILi0EEEPKc
              (&local_88,"Assertion: ");
    puVar11 = (undefined8 *)std::string::append((char *)&local_88);
    local_1a8 = (uchar *)puVar11[2];
    local_1b8 = *puVar11;
    uStack_1b0 = puVar11[1];
    *puVar11 = 0;
    puVar11[1] = 0;
    puVar11[2] = 0;
    std::runtime_error::runtime_error(prVar10,(string *)&local_1b8);
                    /* WARNING: Subroutine does not return */
    ___cxa_throw(prVar10,PTR_typeinfo_00441260,PTR__runtime_error_00441248);
  }
  iVar7 = _DERParseSequenceContent();
  if (iVar7 != 0) {
    pSVar9 = (SEException *)___cxa_allocate_exception(0x48);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8ne190102ILi0EEEPKc
              (&local_88,"Failed to parse as per DeliveryObjectItemSpec");
    SEException::SEException(pSVar9,(string *)&local_88,iVar7,(__CFString *)&cf_libDERErrorDomain);
                    /* WARNING: Subroutine does not return */
    ___cxa_throw(pSVar9,&SEException::typeinfo,SEException::~SEException);
  }
  local_88 = (undefined **)((ulong)local_88._4_4_ << 0x20);
  iVar7 = _DERParseInteger(&local_1b8);
  if (((iVar7 == 0) && ((int)local_88 == 0)) && (local_1a0 == 0x20)) {
    local_158 = operator_new(0xc0);
    local_158[1] = 0;
    local_158[2] = 0;
    *local_158 = &PTR____shared_ptr_emplace_0044f1f8;
    local_160 = local_158 + 3;
    local_158[0xe] = 0;
    local_158[0xf] = 0;
    local_158[0x12] = 0;
    local_158[0x13] = 0;
    local_158[0x14] = 0;
    local_158[0x15] = 0;
    local_158[8] = 0;
    local_158[9] = 0;
    local_158[0x10] = 0;
    local_158[0x11] = 0;
    local_158[0x16] = 0;
    local_158[0x17] = 0;
    local_158[3] = &PTR__P73BaseDeliveryObject_0044f0c0;
    local_158[5] = 0;
    local_158[6] = 0;
    local_158[4] = local_158 + 5;
    local_158[7] = &PTR__BLOB_0044f1c8;
    local_158[10] = 0;
    local_158[0xb] = 0;
    local_158[0xc] = 0;
    local_158[0xd] = 0;
    local_158[0xe] = &PTR__BLOB_0044f1c8;
    local_158[0x13] = 0;
    local_158[0x14] = 0;
    local_158[0x15] = 0;
    local_100 = local_160;
    local_38 = local_158;
    std::vector<unsigned_char,std::allocator<unsigned_char>>::
    __assign_with_size_abi_ne190102_<unsigned_char_const*,unsigned_char_const*>
              ((vector<unsigned_char,std::allocator<unsigned_char>> *)(local_158 + 0xb),local_1a8,
               local_1a8 + 0x20,0x20);
    puVar11 = local_38;
    local_88 = &PTR__BLOB_0044f1c8;
    ppuStack_80 = local_198;
    uStack_78 = uStack_190;
    local_70 = 0;
    BLOB::operator=((BLOB *)(local_38 + 0xe),(BLOB *)&local_88);
    BLOB::~BLOB((BLOB *)&local_88);
    local_218 = &PTR__BLOB_0044f1c8;
    local_210 = *(undefined4 *)(puVar11 + 0xf);
    uStack_20c = *(undefined4 *)((long)puVar11 + 0x7c);
    uStack_208 = *(undefined4 *)(puVar11 + 0x10);
    uStack_204 = *(undefined4 *)((long)puVar11 + 0x84);
    local_200 = puVar11[0x11];
    uVar6 = P73BaseDeliveryObject::parseFPRev();
    *(undefined1 *)(puVar11 + 0x16) = uVar6;
    BLOB::~BLOB((BLOB *)&local_218);
    iVar7 = _DERParseSequence(&local_188,3,&P73BaseFirmwareDERSpec::UpdatePayloadItemSpec,local_2a0,
                              0x30);
    if (iVar7 != 0) {
      pSVar9 = (SEException *)___cxa_allocate_exception(0x48);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8ne190102ILi0EEEPKc
                (&local_88,"Failed to parse updatePayload as per UpdatePayloadItemSpec");
      SEException::SEException(pSVar9,(string *)&local_88,iVar7,(__CFString *)&cf_libDERErrorDomain)
      ;
                    /* WARNING: Subroutine does not return */
      ___cxa_throw(pSVar9,&SEException::typeinfo,SEException::~SEException);
    }
    iVar7 = _DERParseSequenceContent
                      (local_290,2,&P73BaseFirmwareDERSpec::SignedSectionItemSpec,local_238,0x20);
    if (iVar7 != 0) {
      pSVar9 = (SEException *)___cxa_allocate_exception(0x48);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8ne190102ILi0EEEPKc
                (&local_88,"Failed to parse signedSection as per SignedSectionItemSpec");
      SEException::SEException(pSVar9,(string *)&local_88,iVar7,(__CFString *)&cf_libDERErrorDomain)
      ;
                    /* WARNING: Subroutine does not return */
      ___cxa_throw(pSVar9,&SEException::typeinfo,SEException::~SEException);
    }
    UpdateTable::UpdateTable((UpdateTable *)&local_88,local_238);
    puVar11 = local_38;
    *(int *)(local_38 + 0x12) = (int)local_88;
    std::vector<SERestoreInfo::UpdateTableEntry,std::allocator<SERestoreInfo::UpdateTableEntry>>::
    __vdeallocate((vector<SERestoreInfo::UpdateTableEntry,std::allocator<SERestoreInfo::UpdateTableEntry>>
                   *)(local_38 + 0x13));
    puVar11[0x13] = ppuStack_80;
    puVar11[0x14] = uStack_78;
    puVar11[0x15] = local_70;
    ppuStack_80 = (undefined **)0x0;
    uStack_78 = 0;
    local_70 = 0;
    local_f8[0] = &ppuStack_80;
    std::vector<SERestoreInfo::UpdateTableEntry,std::allocator<SERestoreInfo::UpdateTableEntry>>::
    __destroy_vector::operator()[abi_ne190102_((__destroy_vector *)local_f8);
    if ((local_178 == 0) || (local_170 == 0)) {
      prVar10 = (runtime_error *)___cxa_allocate_exception(0x10);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8ne190102ILi0EEEPKc
                (local_f8,"Assertion: ");
      puVar11 = (undefined8 *)std::string::append((char *)local_f8);
      uStack_78 = puVar11[2];
      local_88 = (undefined **)*puVar11;
      ppuStack_80 = (undefined **)puVar11[1];
      *puVar11 = 0;
      puVar11[1] = 0;
      puVar11[2] = 0;
      std::runtime_error::runtime_error(prVar10,(string *)&local_88);
                    /* WARNING: Subroutine does not return */
      ___cxa_throw(prVar10,PTR_typeinfo_00441260,PTR__runtime_error_00441248);
    }
    iVar7 = _DERDecodeSeqContentInit(&local_178,local_1f8);
    if (iVar7 != 0) {
      pSVar9 = (SEException *)___cxa_allocate_exception(0x48);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8ne190102ILi0EEEPKc
                (&local_88,"Cannot init sequence for DeliveryObject.binaries");
      SEException::SEException(pSVar9,(string *)&local_88,iVar7,(__CFString *)&cf_libDERErrorDomain)
      ;
                    /* WARNING: Subroutine does not return */
      ___cxa_throw(pSVar9,&SEException::typeinfo,SEException::~SEException);
    }
    local_118 = (uint *)(local_38 + 4);
    local_110 = (BLOB *)(local_38 + 7);
    while( true ) {
      iVar7 = _DERDecodeSeqNext(local_1f8,local_150);
      if (iVar7 != 0) {
        if (iVar7 != 1) {
          pSVar9 = (SEException *)___cxa_allocate_exception(0x48);
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8ne190102ILi0EEEPKc
                    (&local_88,"Cannot parse DeliveryObject.binaries");
          SEException::SEException
                    (pSVar9,(string *)&local_88,iVar7,(__CFString *)&cf_libDERErrorDomain);
                    /* WARNING: Subroutine does not return */
          ___cxa_throw(pSVar9,&SEException::typeinfo,SEException::~SEException);
        }
        local_88 = &PTR__BLOB_0044f1c8;
        ppuStack_80 = local_188;
        uStack_78 = uStack_180;
        local_70 = 0;
        BLOB::operator=(local_110,(BLOB *)&local_88);
        BLOB::~BLOB((BLOB *)&local_88);
        *(undefined8 *)((long)local_38 + 0xb4) = 0;
        iVar7 = _DERParseSequenceContent
                          (local_228,2,&P73BaseFirmwareDERSpec::UpdatePropertiesItemSpec,local_270,
                           0x20);
        if (iVar7 == 0) {
          iVar7 = _DERDecodeSeqInit(local_260,&local_138,&local_b0);
          if (iVar7 != 0) {
            pSVar9 = (SEException *)___cxa_allocate_exception(0x48);
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8ne190102ILi0EEEPKc
                      (&local_88,"Cannot parse properties entries");
            SEException::SEException
                      (pSVar9,(string *)&local_88,iVar7,(__CFString *)&cf_libDERErrorDomain);
                    /* WARNING: Subroutine does not return */
            ___cxa_throw(pSVar9,&SEException::typeinfo,SEException::~SEException);
          }
          while (iVar7 = _DERDecodeSeqNext(&local_b0,&local_88), iVar7 == 0) {
            iVar7 = _DERDecodeItem(&ppuStack_80,&local_88);
            if (iVar7 != 0) {
              pSVar9 = (SEException *)___cxa_allocate_exception(0x48);
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8ne190102ILi0EEEPKc
                        (local_f8,"Cannot parse property");
              SEException::SEException
                        (pSVar9,(string *)local_f8,iVar7,(__CFString *)&cf_libDERErrorDomain);
                    /* WARNING: Subroutine does not return */
              ___cxa_throw(pSVar9,&SEException::typeinfo,SEException::~SEException);
            }
            iVar7 = _DERParseSequenceContent
                              (&ppuStack_80,2,&P73BaseFirmwareDERSpec::PropertyItemSpec,&local_1d8,
                               0x20);
            if (iVar7 != 0) {
              pSVar9 = (SEException *)___cxa_allocate_exception(0x48);
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8ne190102ILi0EEEPKc
                        (local_f8,"Failed to parse as per PropertyItemSpec");
              SEException::SEException
                        (pSVar9,(string *)local_f8,iVar7,(__CFString *)&cf_libDERErrorDomain);
                    /* WARNING: Subroutine does not return */
              ___cxa_throw(pSVar9,&SEException::typeinfo,SEException::~SEException);
            }
            if (local_1d0 == 4) {
              if (*local_1d8 == 0x69636573) {
                iVar7 = _DERParseInteger(local_1c8,local_150);
                if (iVar7 != 0) {
                  pSVar9 = (SEException *)___cxa_allocate_exception(0x48);
                  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8ne190102ILi0EEEPKc
                            (local_f8,"Failed to parse \'seci\' value");
                  SEException::SEException
                            (pSVar9,(string *)local_f8,iVar7,(__CFString *)&cf_libDERErrorDomain);
                    /* WARNING: Subroutine does not return */
                  ___cxa_throw(pSVar9,&SEException::typeinfo,SEException::~SEException);
                }
                *(undefined4 *)((long)local_38 + 0xb4) = local_150[0];
              }
              else if (*local_1d8 == 0x76686573) {
                iVar7 = _DERParseInteger(local_1c8,local_150);
                if (iVar7 != 0) {
                  pSVar9 = (SEException *)___cxa_allocate_exception(0x48);
                  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8ne190102ILi0EEEPKc
                            (local_f8,"Failed to parse \'sehv\' value");
                  SEException::SEException
                            (pSVar9,(string *)local_f8,iVar7,(__CFString *)&cf_libDERErrorDomain);
                    /* WARNING: Subroutine does not return */
                  ___cxa_throw(pSVar9,&SEException::typeinfo,SEException::~SEException);
                }
                *(undefined4 *)(local_38 + 0x17) = local_150[0];
              }
            }
          }
        }
        else if (iVar7 != 5) {
          pSVar9 = (SEException *)___cxa_allocate_exception(0x48);
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8ne190102ILi0EEEPKc
                    (&local_88,"Failed to parse updateProperties as per UpdatePropertiesItemSpec.");
          SEException::SEException
                    (pSVar9,(string *)&local_88,iVar7,(__CFString *)&cf_libDERErrorDomain);
                    /* WARNING: Subroutine does not return */
          ___cxa_throw(pSVar9,&SEException::typeinfo,SEException::~SEException);
        }
        *(undefined8 **)local_108 = local_100;
        *(undefined8 **)(local_108 + 8) = local_38;
        return;
      }
      local_88 = (undefined **)((ulong)local_88 & 0xffffffff00000000);
      ppuStack_80 = &PTR__BLOB_0044f1c8;
      local_68 = 0;
      local_60[0] = 0;
      local_48[0] = (undefined ***)0x0;
      local_58 = (undefined ***)0x0;
      ppuStack_50 = (undefined ***)0x0;
      local_b4 = 0;
      iVar7 = _DERParseSequenceContent
                        (local_148,4,&P73BaseFirmwareDERSpec::ImageBinaryItemSpec,local_f8,0x40);
      if (iVar7 != 0) {
        pSVar9 = (SEException *)___cxa_allocate_exception(0x48);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8ne190102ILi0EEEPKc
                  (&local_b0,"Cannot parse ImageBinary.");
        SEException::SEException
                  (pSVar9,(string *)&local_b0,iVar7,(__CFString *)&cf_libDERErrorDomain);
                    /* WARNING: Subroutine does not return */
        ___cxa_throw(pSVar9,&SEException::typeinfo,SEException::~SEException);
      }
      iVar7 = _DERParseInteger(local_f8,&local_b4);
      if ((iVar7 != 0) || (4 < local_b4)) break;
      local_88 = (undefined **)CONCAT44(local_88._4_4_,local_b4);
      local_b0 = (undefined ***)&PTR__BLOB_0044f1c8;
      local_a8 = local_e8;
      ppuStack_a0 = ppuStack_e0;
      local_98 = (undefined ***)0x0;
      BLOB::operator=((BLOB *)&ppuStack_80,(BLOB *)&local_b0);
      BLOB::~BLOB((BLOB *)&local_b0);
      iVar7 = _DERParseInteger(local_d8,local_60);
      if (iVar7 != 0) {
        pSVar9 = (SEException *)___cxa_allocate_exception(0x48);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8ne190102ILi0EEEPKc
                  (&local_b0,"Cannot parse ImageBinary.index.");
        SEException::SEException
                  (pSVar9,(string *)&local_b0,iVar7,(__CFString *)&cf_libDERErrorDomain);
                    /* WARNING: Subroutine does not return */
        ___cxa_throw(pSVar9,&SEException::typeinfo,SEException::~SEException);
      }
      iVar7 = _DERDecodeSeqContentInit(local_c8,local_1e8);
      if (iVar7 != 0) {
        pSVar9 = (SEException *)___cxa_allocate_exception(0x48);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8ne190102ILi0EEEPKc
                  (&local_b0,"Cannot init sequence for ImageBinary.apdus");
        SEException::SEException
                  (pSVar9,(string *)&local_b0,iVar7,(__CFString *)&cf_libDERErrorDomain);
                    /* WARNING: Subroutine does not return */
        ___cxa_throw(pSVar9,&SEException::typeinfo,SEException::~SEException);
      }
      while( true ) {
        iVar7 = _DERDecodeSeqNext(local_1e8,local_250);
        if (iVar7 != 0) break;
        local_138 = &PTR__BLOB_0044f1c8;
        local_130 = local_248;
        puStack_128 = puStack_240;
        local_120 = (undefined **)0x0;
        if (ppuStack_50 < local_48[0]) {
          *ppuStack_50 = &PTR__BLOB_0044f1c8;
          ppuStack_50[1] = local_248;
          ppuStack_50[2] = puStack_240;
          ppuStack_50[3] = (undefined **)0x0;
          pppuVar14 = (undefined ***)(ppuStack_50 + 4);
        }
        else {
          lVar13 = (long)ppuStack_50 - (long)local_58 >> 5;
          uVar1 = lVar13 + 1;
          if (0x7ffffffffffffff < uVar1) {
                    /* WARNING: Subroutine does not return */
            std::vector<std::string,std::allocator<std::string>>::__throw_length_error_abi_ne190102_
                      ();
          }
          uVar15 = (long)local_48[0] - (long)local_58 >> 4;
          if (uVar15 <= uVar1) {
            uVar15 = uVar1;
          }
          if (0x7fffffffffffffdf < (ulong)((long)local_48[0] - (long)local_58)) {
            uVar15 = 0x7ffffffffffffff;
          }
          local_90 = (allocator *)local_48;
          if (uVar15 == 0) {
            auVar18 = ZEXT816(0);
          }
          else {
            auVar18 = std::__allocate_at_least_abi_ne190102_<std::allocator<SERestoreInfo::BLOB>>
                                (local_90,uVar15);
          }
          ppuVar5 = ppuStack_50;
          local_b0 = auVar18._0_8_;
          local_a8 = local_b0 + lVar13 * 4;
          local_98 = local_b0 + auVar18._8_8_ * 4;
          pppuVar8 = local_b0 + lVar13 * 4;
          ppuStack_a0 = pppuVar8 + 4;
          *pppuVar8 = &PTR__BLOB_0044f1c8;
          pppuVar8[3] = (undefined **)local_120;
          pppuVar8[1] = (undefined **)local_130;
          pppuVar8[2] = (undefined **)puStack_128;
          pppuVar16 = (undefined ***)((long)local_58 + ((long)local_a8 - (long)ppuStack_50));
          pppuVar8 = (undefined ***)local_58;
          pppuVar12 = pppuVar16;
          pppuVar14 = (undefined ***)ppuStack_a0;
          if (local_58 != ppuStack_50) {
            do {
              *pppuVar12 = &PTR__BLOB_0044f1c8;
              uVar2 = *(undefined4 *)((long)pppuVar8 + 0xc);
              uVar3 = *(undefined4 *)(pppuVar8 + 2);
              uVar4 = *(undefined4 *)((long)pppuVar8 + 0x14);
              *(undefined4 *)(pppuVar12 + 1) = *(undefined4 *)(pppuVar8 + 1);
              *(undefined4 *)((long)pppuVar12 + 0xc) = uVar2;
              *(undefined4 *)(pppuVar12 + 2) = uVar3;
              *(undefined4 *)((long)pppuVar12 + 0x14) = uVar4;
              pppuVar12[3] = pppuVar8[3];
              pppuVar8 = pppuVar8 + 4;
              pppuVar12 = pppuVar12 + 4;
              pppuVar17 = (undefined ***)local_58;
            } while (pppuVar8 != (undefined ***)ppuStack_50);
            do {
              (*(code *)**pppuVar17)(pppuVar17);
              pppuVar17 = pppuVar17 + 4;
              pppuVar14 = (undefined ***)ppuStack_a0;
            } while (pppuVar17 != (undefined ***)ppuVar5);
          }
          ppuVar5 = local_48[0];
          local_48[0] = local_98;
          local_98 = ppuVar5;
          local_b0 = (undefined ***)local_58;
          local_a8 = local_58;
          ppuStack_a0 = local_58;
          local_58 = pppuVar16;
          ppuStack_50 = pppuVar14;
          std::__split_buffer<SERestoreInfo::BLOB,std::allocator<SERestoreInfo::BLOB>&>::
          ~__split_buffer((__split_buffer<SERestoreInfo::BLOB,std::allocator<SERestoreInfo::BLOB>&>
                           *)&local_b0);
        }
        ppuStack_50 = pppuVar14;
        BLOB::~BLOB((BLOB *)&local_138);
      }
      if (iVar7 != 1) {
        pSVar9 = (SEException *)___cxa_allocate_exception(0x48);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8ne190102ILi0EEEPKc
                  (&local_b0,"Cannot parse ImageBinary.apdus");
        SEException::SEException
                  (pSVar9,(string *)&local_b0,iVar7,(__CFString *)&cf_libDERErrorDomain);
                    /* WARNING: Subroutine does not return */
        ___cxa_throw(pSVar9,&SEException::typeinfo,SEException::~SEException);
      }
      std::
      __tree<std::__value_type<unsigned_short,SERestoreInfo::ImageBinary>,std::__map_value_compare<unsigned_short,std::__value_type<unsigned_short,SERestoreInfo::ImageBinary>,std::less<unsigned_short>,true>,std::allocator<std::__value_type<unsigned_short,SERestoreInfo::ImageBinary>>>
      ::__emplace_unique_impl<unsigned_int&,SERestoreInfo::ImageBinary&>
                (local_118,(ImageBinary *)local_60);
      local_b0 = (undefined ***)&local_58;
      std::vector<SERestoreInfo::BLOB,std::allocator<SERestoreInfo::BLOB>>::__destroy_vector::
      operator()[abi_ne190102_((__destroy_vector *)&local_b0);
      BLOB::~BLOB((BLOB *)&ppuStack_80);
    }
    pSVar9 = (SEException *)___cxa_allocate_exception(0x48);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8ne190102ILi0EEEPKc
              (&local_b0,"ImageBinary.type is out of range.");
    SEException::SEException(pSVar9,(string *)&local_b0,iVar7,(__CFString *)&cf_libDERErrorDomain);
                    /* WARNING: Subroutine does not return */
    ___cxa_throw(pSVar9,&SEException::typeinfo,SEException::~SEException);
  }
  pSVar9 = (SEException *)___cxa_allocate_exception(0x48);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8ne190102ILi0EEEPKc
            (&local_88,"Failed to validate delivery object");
  SEException::SEException(pSVar9,(string *)&local_88,0xf,(__CFString *)&cf_SEUpdaterErrorDomain);
                    /* WARNING: Subroutine does not return */
  ___cxa_throw(pSVar9,&SEException::typeinfo,SEException::~SEException);
}


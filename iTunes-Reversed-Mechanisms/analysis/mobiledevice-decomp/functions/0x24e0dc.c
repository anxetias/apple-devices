// rea decompile_all
// name: SERestoreInfo::UpdateTable::UpdateTable
// address: 0x24e0dc
// body: available
// range: 0x24e0dc-0x24e5a2 inclusive
// range: 0x24e5a8-0x24e5b0 inclusive
// range: 0x24e5b6-0x24e603 inclusive
// range: 0x24e609-0x24e654 inclusive
// range: 0x24e65a-0x24e6a7 inclusive
// range: 0x24e6ad-0x24e6fa inclusive
// range: 0x24e700-0x24e74a inclusive
// range: 0x24e750-0x24e79a inclusive
// range: 0x24e7a0-0x24e7ea inclusive
// range: 0x24e7ed-0x24e83a inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x24e59e to 0x2aa03e ___cxa_throw (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x24e5ac to 0x2165ea std::vector<std::string,std::allocator<std::string>>::__throw_length_error[abi:ne190102] (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x24e5ff to 0x2aa03e ___cxa_throw (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x24e650 to 0x2aa03e ___cxa_throw (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x24e6a3 to 0x2aa03e ___cxa_throw (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x24e6f6 to 0x2aa03e ___cxa_throw (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x24e746 to 0x2aa03e ___cxa_throw (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x24e796 to 0x2aa03e ___cxa_throw (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x24e7e6 to 0x2aa03e ___cxa_throw (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x24e836 to 0x2aa03e ___cxa_throw (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* SERestoreInfo::UpdateTable::UpdateTable(DERItem const&) */

void __thiscall SERestoreInfo::UpdateTable::UpdateTable(UpdateTable *this,DERItem *param_1)

{
  ushort *puVar1;
  vector *pvVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  runtime_error *this_00;
  undefined8 *puVar6;
  SEException *pSVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  ushort uVar11;
  ushort *puVar12;
  long lVar13;
  size_t sVar14;
  ushort *puVar15;
  UpdateTableEntry *pUVar16;
  byte bVar17;
  byte *pbVar18;
  bool bVar19;
  undefined1 auVar20 [16];
  undefined1 local_118 [16];
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined1 local_d8 [8];
  ushort *local_d0;
  long local_c8;
  char local_c0 [24];
  ushort *local_a8;
  UpdateTable *local_a0;
  UpdateTable *local_98;
  UpdateTable *local_90;
  ushort *local_88;
  int local_7c;
  long local_78;
  vector *pvStack_70;
  vector<unsigned_short,std::allocator<unsigned_short>> *local_68;
  void *pvStack_60;
  void *local_58;
  undefined8 uStack_50;
  ushort *local_48;
  ushort *puStack_40;
  ushort *local_38;
  
  local_90 = this + 8;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  iVar3 = _DERParseSequenceContent
                    (param_1,3,&P73BaseFirmwareDERSpec::UpdateTableItemSpec,local_118,0x30);
  if (iVar3 != 0) {
    pSVar7 = (SEException *)___cxa_allocate_exception(0x48);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8ne190102ILi0EEEPKc
              (&local_78,"Cannot parse UpdateTable.");
    SEException::SEException(pSVar7,(string *)&local_78,iVar3,(__CFString *)&cf_libDERErrorDomain);
                    /* WARNING: Subroutine does not return */
    ___cxa_throw(pSVar7,&SEException::typeinfo,SEException::~SEException);
  }
  iVar3 = _DERParseInteger(local_108,this);
  if (iVar3 != 0) {
    pSVar7 = (SEException *)___cxa_allocate_exception(0x48);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8ne190102ILi0EEEPKc
              (&local_78,"Cannot parse UpdateTable.bsn.");
    SEException::SEException(pSVar7,(string *)&local_78,iVar3,(__CFString *)&cf_libDERErrorDomain);
                    /* WARNING: Subroutine does not return */
    ___cxa_throw(pSVar7,&SEException::typeinfo,SEException::~SEException);
  }
  iVar3 = _DERDecodeSeqContentInit(local_f8,local_e8);
  if (iVar3 != 0) {
    pSVar7 = (SEException *)___cxa_allocate_exception(0x48);
    __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8ne190102ILi0EEEPKc
              (&local_78,"Cannot parse UpdateTable entries");
    SEException::SEException(pSVar7,(string *)&local_78,iVar3,(__CFString *)&cf_libDERErrorDomain);
                    /* WARNING: Subroutine does not return */
    ___cxa_throw(pSVar7,&SEException::typeinfo,SEException::~SEException);
  }
  local_a0 = this + 0x18;
  local_98 = this;
  do {
    iVar3 = _DERDecodeSeqNext(local_e8,local_d8);
    if (iVar3 != 0) {
      if (iVar3 != 1) {
        pSVar7 = (SEException *)___cxa_allocate_exception(0x48);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8ne190102ILi0EEEPKc
                  (&local_78,"Wrong UpdateTable entries");
        SEException::SEException
                  (pSVar7,(string *)&local_78,iVar3,(__CFString *)&cf_libDERErrorDomain);
                    /* WARNING: Subroutine does not return */
        ___cxa_throw(pSVar7,&SEException::typeinfo,SEException::~SEException);
      }
      if (*(long *)(this + 8) != *(long *)(this + 0x10)) {
        return;
      }
      pSVar7 = (SEException *)___cxa_allocate_exception(0x48);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8ne190102ILi0EEEPKc
                (&local_78,"Size of UpdateTable.entries is zero");
      SEException::SEException
                (pSVar7,(string *)&local_78,0xf,(__CFString *)&cf_SEUpdaterErrorDomain);
                    /* WARNING: Subroutine does not return */
      ___cxa_throw(pSVar7,&SEException::typeinfo,SEException::~SEException);
    }
    if ((local_d0 == (ushort *)0x0) || (local_c8 == 0)) {
      this_00 = (runtime_error *)___cxa_allocate_exception(0x10);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8ne190102ILi0EEEPKc
                (local_c0,"Assertion: ");
      puVar6 = (undefined8 *)std::string::append(local_c0);
      local_38 = (ushort *)puVar6[2];
      local_48 = (ushort *)*puVar6;
      puStack_40 = (ushort *)puVar6[1];
      *puVar6 = 0;
      puVar6[1] = 0;
      puVar6[2] = 0;
      std::runtime_error::runtime_error(this_00,(string *)&local_48);
                    /* WARNING: Subroutine does not return */
      ___cxa_throw(this_00,PTR_typeinfo_00441260,PTR__runtime_error_00441248);
    }
    local_58 = (void *)0x0;
    uStack_50 = 0;
    local_68 = (vector<unsigned_short,std::allocator<unsigned_short>> *)0x0;
    pvStack_60 = (void *)0x0;
    local_78 = 0;
    pvStack_70 = (vector *)0x0;
    iVar3 = 0;
    puVar12 = local_d0;
    do {
      if ((ushort *)((long)local_d0 + local_c8) <= puVar12) break;
      bVar17 = (byte)*puVar12;
      if ((bVar17 == 0) || ((bVar17 & 1) != 0)) {
        pSVar7 = (SEException *)___cxa_allocate_exception(0x48);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8ne190102ILi0EEEPKc
                  (&local_48,"Wrong length for updateTableEnry");
        SEException::SEException
                  (pSVar7,(string *)&local_48,2,(__CFString *)&cf_SEUpdaterErrorDomain);
                    /* WARNING: Subroutine does not return */
        ___cxa_throw(pSVar7,&SEException::typeinfo,SEException::~SEException);
      }
      puVar12 = (ushort *)((long)puVar12 + 1);
      local_48 = (ushort *)0x0;
      puStack_40 = (ushort *)0x0;
      local_38 = (ushort *)0x0;
      local_7c = iVar3;
      do {
        uVar11 = *puVar12 << 8 | *puVar12 >> 8;
        local_88 = puVar12;
        if (puStack_40 < local_38) {
          *puStack_40 = uVar11;
          puVar15 = puStack_40 + 1;
        }
        else {
          sVar14 = (long)puStack_40 - (long)local_48;
          lVar10 = (long)sVar14 >> 1;
          if (lVar10 < -1) {
                    /* WARNING: Subroutine does not return */
            std::vector<std::string,std::allocator<std::string>>::__throw_length_error_abi_ne190102_
                      ();
          }
          uVar8 = (long)local_38 - (long)local_48;
          uVar9 = uVar8;
          if (uVar8 <= lVar10 + 1U) {
            uVar9 = lVar10 + 1U;
          }
          uVar4 = 0x7fffffffffffffff;
          if (uVar8 < 0x7ffffffffffffffe) {
            uVar4 = uVar9;
          }
          if (uVar4 == 0) {
            auVar20 = ZEXT816(0);
            lVar13 = lVar10;
          }
          else {
            auVar20 = std::__allocate_at_least_abi_ne190102_<std::allocator<unsigned_short>>
                                ((allocator *)&local_38,uVar4);
            sVar14 = (long)puStack_40 - (long)local_48;
            lVar13 = (long)sVar14 >> 1;
          }
          lVar5 = auVar20._0_8_;
          puVar12 = (ushort *)(lVar5 + lVar10 * 2);
          local_a8 = (ushort *)(lVar5 + auVar20._8_8_ * 2);
          *puVar12 = uVar11;
          puVar15 = (ushort *)(lVar5 + lVar10 * 2 + 2);
          puVar12 = puVar12 + -lVar13;
          _memcpy(puVar12,local_48,sVar14);
          puVar1 = local_48;
          local_38 = local_a8;
          bVar19 = local_48 != (ushort *)0x0;
          local_48 = puVar12;
          if (bVar19) {
            puStack_40 = puVar15;
            operator_delete(puVar1);
          }
        }
        pvVar2 = pvStack_70;
        puVar1 = local_88;
        puVar12 = local_88 + 1;
        bVar17 = bVar17 - 2;
        puStack_40 = puVar15;
      } while (bVar17 != 0);
      if (pvStack_70 < local_68) {
        *(undefined8 *)pvStack_70 = 0;
        *(undefined8 *)(pvStack_70 + 8) = 0;
        *(undefined8 *)(pvStack_70 + 0x10) = 0;
        std::vector<unsigned_short,std::allocator<unsigned_short>>::
        __init_with_size_abi_ne190102_<unsigned_short*,unsigned_short*>
                  ((vector<unsigned_short,std::allocator<unsigned_short>> *)pvStack_70,local_48,
                   puVar15,(long)puVar15 - (long)local_48 >> 1);
        pvStack_70 = pvVar2 + 0x18;
      }
      else {
        pvStack_70 = std::
                     vector<std::vector<unsigned_short,std::allocator<unsigned_short>>,std::allocator<std::vector<unsigned_short,std::allocator<unsigned_short>>>>
                     ::
                     __emplace_back_slow_path<std::vector<unsigned_short,std::allocator<unsigned_short>>&>
                               ((vector<std::vector<unsigned_short,std::allocator<unsigned_short>>,std::allocator<std::vector<unsigned_short,std::allocator<unsigned_short>>>>
                                 *)&local_78,(vector *)&local_48);
      }
      iVar3 = local_7c;
      this = local_98;
      if (local_48 != (ushort *)0x0) {
        puStack_40 = local_48;
        operator_delete(local_48);
      }
      puVar12 = puVar1 + 1;
      iVar3 = iVar3 + 1;
    } while (iVar3 != 4);
    bVar17 = (byte)*puVar12;
    pbVar18 = (byte *)((long)puVar12 + 1);
    if ((ulong)bVar17 == 0) {
      uVar11 = 0;
    }
    else {
      lVar10 = 0;
      uVar11 = 0;
      do {
        uVar11 = (ushort)pbVar18[lVar10] | uVar11 << 8;
        lVar10 = lVar10 + 1;
      } while (bVar17 != (byte)lVar10);
      pbVar18 = (byte *)((long)puVar12 + (ulong)(bVar17 - 1 & 0xff) + 2);
      puVar12 = (ushort *)((ulong)bVar17 + (long)puVar12);
    }
    local_48 = (ushort *)0x0;
    puStack_40 = (ushort *)0x0;
    local_38 = (ushort *)0x0;
    local_48 = operator_new(2);
    pvVar2 = pvStack_70;
    puStack_40 = local_48 + 1;
    *local_48 = uVar11;
    local_38 = puStack_40;
    if (pvStack_70 < local_68) {
      *(undefined8 *)pvStack_70 = 0;
      *(undefined8 *)(pvStack_70 + 8) = 0;
      *(undefined8 *)(pvStack_70 + 0x10) = 0;
      std::vector<unsigned_short,std::allocator<unsigned_short>>::
      __init_with_size_abi_ne190102_<unsigned_short*,unsigned_short*>
                ((vector<unsigned_short,std::allocator<unsigned_short>> *)pvStack_70,local_48,
                 puStack_40,(long)puStack_40 - (long)local_48 >> 1);
      pvStack_70 = pvVar2 + 0x18;
    }
    else {
      pvStack_70 = std::
                   vector<std::vector<unsigned_short,std::allocator<unsigned_short>>,std::allocator<std::vector<unsigned_short,std::allocator<unsigned_short>>>>
                   ::
                   __emplace_back_slow_path<std::vector<unsigned_short,std::allocator<unsigned_short>>&>
                             ((vector<std::vector<unsigned_short,std::allocator<unsigned_short>>,std::allocator<std::vector<unsigned_short,std::allocator<unsigned_short>>>>
                               *)&local_78,(vector *)&local_48);
    }
    if (local_48 != (ushort *)0x0) {
      puStack_40 = local_48;
      operator_delete(local_48);
    }
    if (*pbVar18 != 0x20) {
      pSVar7 = (SEException *)___cxa_allocate_exception(0x48);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8ne190102ILi0EEEPKc
                (&local_48,"wrong updateTableEnry with wrong hash size");
      SEException::SEException
                (pSVar7,(string *)&local_48,0xf,(__CFString *)&cf_SEUpdaterErrorDomain);
                    /* WARNING: Subroutine does not return */
      ___cxa_throw(pSVar7,&SEException::typeinfo,SEException::~SEException);
    }
    std::vector<unsigned_char,std::allocator<unsigned_char>>::
    __assign_with_size_abi_ne190102_<unsigned_char_const*,unsigned_char_const*>
              ((vector<unsigned_char,std::allocator<unsigned_char>> *)&pvStack_60,
               (uchar *)(puVar12 + 1),(uchar *)(puVar12 + 0x11),0x20);
    if ((long)pvStack_70 - local_78 != 0x78) {
      pSVar7 = (SEException *)___cxa_allocate_exception(0x48);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8ne190102ILi0EEEPKc
                (&local_48,"Missing element in updateTableEnry");
      SEException::SEException
                (pSVar7,(string *)&local_48,0xf,(__CFString *)&cf_SEUpdaterErrorDomain);
                    /* WARNING: Subroutine does not return */
      ___cxa_throw(pSVar7,&SEException::typeinfo,SEException::~SEException);
    }
    pUVar16 = *(UpdateTableEntry **)(this + 0x10);
    if (pUVar16 < *(UpdateTableEntry **)(this + 0x18)) {
      std::allocator<SERestoreInfo::UpdateTableEntry>::
      construct_abi_ne190102_<SERestoreInfo::UpdateTableEntry,SERestoreInfo::UpdateTableEntry&>
                ((allocator<SERestoreInfo::UpdateTableEntry> *)local_a0,pUVar16,
                 (UpdateTableEntry *)&local_78);
      pUVar16 = pUVar16 + 0x30;
      *(UpdateTableEntry **)(this + 0x10) = pUVar16;
    }
    else {
      pUVar16 = std::
                vector<SERestoreInfo::UpdateTableEntry,std::allocator<SERestoreInfo::UpdateTableEntry>>
                ::__emplace_back_slow_path<SERestoreInfo::UpdateTableEntry&>
                          ((vector<SERestoreInfo::UpdateTableEntry,std::allocator<SERestoreInfo::UpdateTableEntry>>
                            *)local_90,(UpdateTableEntry *)&local_78);
    }
    *(UpdateTableEntry **)(this + 0x10) = pUVar16;
    if (pvStack_60 != (void *)0x0) {
      local_58 = pvStack_60;
      operator_delete(pvStack_60);
    }
    local_48 = (ushort *)&local_78;
    std::
    vector<std::vector<unsigned_short,std::allocator<unsigned_short>>,std::allocator<std::vector<unsigned_short,std::allocator<unsigned_short>>>>
    ::__destroy_vector::operator()[abi_ne190102_((__destroy_vector *)&local_48);
  } while( true );
}


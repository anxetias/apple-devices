// rea decompile_all
// name: SERestoreInfo::P73BaseFirmware::updateMeasurementDict
// address: 0x2500cc
// body: available
// range: 0x2500cc-0x2505c0 inclusive
// range: 0x2505c3-0x250610 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x2505bc to 0x2aa03e ___cxa_throw (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x25060c to 0x2aa03e ___cxa_throw (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* SERestoreInfo::P73BaseFirmware::updateMeasurementDict(__CFDictionary*,
   std::shared_ptr<SERestoreInfo::SEDeviceInfo const>) const */

void __thiscall
SERestoreInfo::P73BaseFirmware::updateMeasurementDict
          (P73BaseFirmware *this,undefined8 param_1,long *param_3)

{
  uint uVar1;
  char *pcVar2;
  undefined8 uVar3;
  vector *pvVar4;
  vector<unsigned_char,std::allocator<unsigned_char>> *pvVar5;
  long *plVar6;
  int iVar7;
  int iVar8;
  vector<unsigned_char,std::allocator<unsigned_char>> *this_00;
  char *pcVar9;
  uchar *puVar10;
  long *plVar11;
  long lVar12;
  SEException *pSVar13;
  size_t sVar14;
  long *plVar15;
  bool bVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  piecewise_construct_t *local_a0;
  undefined8 local_98;
  long local_90;
  long *local_88;
  long local_80;
  long *local_78;
  long *local_70;
  undefined1 local_68 [16];
  vector *local_58;
  P73BaseFirmware *local_50;
  vector<unsigned_char,std::allocator<unsigned_char>> *local_38;
  
  local_38 = (vector<unsigned_char,std::allocator<unsigned_char>> *)0x0;
  if ((long *)*param_3 != (long *)0x0) {
    (**(code **)(*(long *)*param_3 + 0x10))(&local_70);
    this_00 = operator_new(0x18);
    *(undefined1 (*) [16])this_00 = (undefined1  [16])0x0;
    *(undefined8 *)(this_00 + 0x10) = 0;
    std::vector<unsigned_char,std::allocator<unsigned_char>>::
    __init_with_size_abi_ne190102_<unsigned_char_const*,unsigned_char_const*>
              (this_00,(uchar *)local_70,(uchar *)local_68._0_8_,local_68._0_8_ - (long)local_70);
    pvVar5 = local_38;
    local_58 = (vector *)0x0;
    bVar16 = local_38 != (vector<unsigned_char,std::allocator<unsigned_char>> *)0x0;
    local_38 = this_00;
    if (bVar16) {
      std::default_delete<std::vector<unsigned_char,std::allocator<unsigned_char>>>::
      operator()[abi_ne190102_
                ((default_delete<std::vector<unsigned_char,std::allocator<unsigned_char>>> *)
                 &local_38,(vector *)pvVar5);
      pvVar4 = local_58;
      local_58 = (vector *)0x0;
      if (pvVar4 != (vector *)0x0) {
        std::default_delete<std::vector<unsigned_char,std::allocator<unsigned_char>>>::
        operator()[abi_ne190102_
                  ((default_delete<std::vector<unsigned_char,std::allocator<unsigned_char>>> *)
                   &local_58,pvVar4);
      }
    }
    if (local_70 != (long *)0x0) {
      local_68._0_8_ = local_70;
      operator_delete(local_70);
    }
    iVar7 = (**(code **)(*(long *)*param_3 + 0x20))();
    if (iVar7 == 0x36) {
      pcVar9 = operator_new(0x20);
      pcVar9[0x10] = '|';
      pcVar9[0x11] = -0x25;
      pcVar9[0x12] = -0x4a;
      pcVar9[0x13] = -0x3f;
      pcVar9[0x14] = '\x16';
      pcVar9[0x15] = -0x70;
      pcVar9[0x16] = -0x5f;
      pcVar9[0x17] = -0x71;
      pcVar9[0x18] = -0x79;
      pcVar9[0x19] = 'G';
      pcVar9[0x1a] = 'O';
      pcVar9[0x1b] = ']';
      pcVar9[0x1c] = -5;
      pcVar9[0x1d] = -0x32;
      pcVar9[0x1e] = '\n';
      pcVar9[0x1f] = '\x04';
      pcVar9[0] = 'j';
      pcVar9[1] = -0x6c;
      pcVar9[2] = -0x18;
      pcVar9[3] = -10;
      pcVar9[4] = -0x2c;
      pcVar9[5] = -0x66;
      pcVar9[6] = '6';
      pcVar9[7] = ';';
      pcVar9[8] = -0x54;
      pcVar9[9] = -0x66;
      pcVar9[10] = '\b';
      pcVar9[0xb] = -0x4d;
      pcVar9[0xc] = -0x65;
      pcVar9[0xd] = -0x66;
      pcVar9[0xe] = 'k';
      pcVar9[0xf] = ':';
      puVar10 = operator_new(0x20);
      puVar10[0x10] = 0xd3;
      puVar10[0x11] = 0xc2;
      puVar10[0x12] = 0xc6;
      puVar10[0x13] = 0xfb;
      puVar10[0x14] = 0xfa;
      puVar10[0x15] = '\x1f';
      puVar10[0x16] = 'B';
      puVar10[0x17] = 0xa6;
      puVar10[0x18] = 0x94;
      puVar10[0x19] = '\x16';
      puVar10[0x1a] = '\x05';
      puVar10[0x1b] = '/';
      puVar10[0x1c] = 0xe5;
      puVar10[0x1d] = 'y';
      puVar10[0x1e] = 0xcf;
      puVar10[0x1f] = '\x11';
      puVar10[0] = 0xb0;
      puVar10[1] = 0xf8;
      puVar10[2] = 'Q';
      puVar10[3] = 0x81;
      puVar10[4] = 0xef;
      puVar10[5] = 'n';
      puVar10[6] = 'K';
      puVar10[7] = 'K';
      puVar10[8] = 0xa5;
      puVar10[9] = 'w';
      puVar10[10] = 'B';
      puVar10[0xb] = 0xe3;
      puVar10[0xc] = '~';
      puVar10[0xd] = 0xbf;
      puVar10[0xe] = 0xd0;
      puVar10[0xf] = 0x80;
      pcVar2 = *(char **)local_38;
      if (*(long *)(local_38 + 8) - (long)pcVar2 == 0x20) {
        auVar19[0] = -(*pcVar9 == *pcVar2);
        auVar19[1] = -(pcVar9[1] == pcVar2[1]);
        auVar19[2] = -(pcVar9[2] == pcVar2[2]);
        auVar19[3] = -(pcVar9[3] == pcVar2[3]);
        auVar19[4] = -(pcVar9[4] == pcVar2[4]);
        auVar19[5] = -(pcVar9[5] == pcVar2[5]);
        auVar19[6] = -(pcVar9[6] == pcVar2[6]);
        auVar19[7] = -(pcVar9[7] == pcVar2[7]);
        auVar19[8] = -(pcVar9[8] == pcVar2[8]);
        auVar19[9] = -(pcVar9[9] == pcVar2[9]);
        auVar19[10] = -(pcVar9[10] == pcVar2[10]);
        auVar19[0xb] = -(pcVar9[0xb] == pcVar2[0xb]);
        auVar19[0xc] = -(pcVar9[0xc] == pcVar2[0xc]);
        auVar19[0xd] = -(pcVar9[0xd] == pcVar2[0xd]);
        auVar19[0xe] = -(pcVar9[0xe] == pcVar2[0xe]);
        auVar19[0xf] = -(pcVar9[0xf] == pcVar2[0xf]);
        auVar17[0] = -(pcVar9[0x10] == pcVar2[0x10]);
        auVar17[1] = -(pcVar9[0x11] == pcVar2[0x11]);
        auVar17[2] = -(pcVar9[0x12] == pcVar2[0x12]);
        auVar17[3] = -(pcVar9[0x13] == pcVar2[0x13]);
        auVar17[4] = -(pcVar9[0x14] == pcVar2[0x14]);
        auVar17[5] = -(pcVar9[0x15] == pcVar2[0x15]);
        auVar17[6] = -(pcVar9[0x16] == pcVar2[0x16]);
        auVar17[7] = -(pcVar9[0x17] == pcVar2[0x17]);
        auVar17[8] = -(pcVar9[0x18] == pcVar2[0x18]);
        auVar17[9] = -(pcVar9[0x19] == pcVar2[0x19]);
        auVar17[10] = -(pcVar9[0x1a] == pcVar2[0x1a]);
        auVar17[0xb] = -(pcVar9[0x1b] == pcVar2[0x1b]);
        auVar17[0xc] = -(pcVar9[0x1c] == pcVar2[0x1c]);
        auVar17[0xd] = -(pcVar9[0x1d] == pcVar2[0x1d]);
        auVar17[0xe] = -(pcVar9[0x1e] == pcVar2[0x1e]);
        auVar17[0xf] = -(pcVar9[0x1f] == pcVar2[0x1f]);
        auVar17 = auVar17 & auVar19;
        bVar16 = (ushort)((ushort)(SUB161(auVar17 >> 7,0) & 1) |
                          (ushort)(SUB161(auVar17 >> 0xf,0) & 1) << 1 |
                          (ushort)(SUB161(auVar17 >> 0x17,0) & 1) << 2 |
                          (ushort)(SUB161(auVar17 >> 0x1f,0) & 1) << 3 |
                          (ushort)(SUB161(auVar17 >> 0x27,0) & 1) << 4 |
                          (ushort)(SUB161(auVar17 >> 0x2f,0) & 1) << 5 |
                          (ushort)(SUB161(auVar17 >> 0x37,0) & 1) << 6 |
                          (ushort)(SUB161(auVar17 >> 0x3f,0) & 1) << 7 |
                          (ushort)(SUB161(auVar17 >> 0x47,0) & 1) << 8 |
                          (ushort)(SUB161(auVar17 >> 0x4f,0) & 1) << 9 |
                          (ushort)(SUB161(auVar17 >> 0x57,0) & 1) << 10 |
                          (ushort)(SUB161(auVar17 >> 0x5f,0) & 1) << 0xb |
                          (ushort)(SUB161(auVar17 >> 0x67,0) & 1) << 0xc |
                          (ushort)(SUB161(auVar17 >> 0x6f,0) & 1) << 0xd |
                          (ushort)(SUB161(auVar17 >> 0x77,0) & 1) << 0xe |
                         (ushort)(byte)(auVar17[0xf] >> 7) << 0xf) == 0xffff;
      }
      else {
        bVar16 = false;
      }
      iVar7 = SERestoreInfoLog::get();
      uVar1 = **(uint **)local_38;
      SERestoreInfoLog::printLog
                (iVar7,(char *)((long)&MACH_HEADER.magic + 2),"updateMeasurementDict",
                 "KeyID 0x%X, overwriting with dev %d",
                 (ulong)(uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 |
                        uVar1 << 0x18),(ulong)bVar16);
      if (bVar16 != false) {
        std::vector<unsigned_char,std::allocator<unsigned_char>>::
        __assign_with_size_abi_ne190102_<unsigned_char_const*,unsigned_char_const*>
                  (local_38,puVar10,puVar10 + 0x20,0x20);
      }
    }
    else {
      iVar7 = (**(code **)(*(long *)*param_3 + 0x20))();
      if (iVar7 != 0x38) goto LAB_00250378;
      pcVar9 = operator_new(0x20);
      pcVar9[0x10] = -0x44;
      pcVar9[0x11] = '\x1d';
      pcVar9[0x12] = '~';
      pcVar9[0x13] = '3';
      pcVar9[0x14] = -0x2a;
      pcVar9[0x15] = -0x7c;
      pcVar9[0x16] = 'q';
      pcVar9[0x17] = -0x50;
      pcVar9[0x18] = '\x1c';
      pcVar9[0x19] = -0x21;
      pcVar9[0x1a] = -0x5a;
      pcVar9[0x1b] = -0xe;
      pcVar9[0x1c] = -0x41;
      pcVar9[0x1d] = -0x1e;
      pcVar9[0x1e] = '\f';
      pcVar9[0x1f] = 'q';
      pcVar9[0] = 'd';
      pcVar9[1] = -0x2b;
      pcVar9[2] = -0x56;
      pcVar9[3] = '\x1b';
      pcVar9[4] = -0x4a;
      pcVar9[5] = -0x43;
      pcVar9[6] = -0x2f;
      pcVar9[7] = -0x35;
      pcVar9[8] = -0x56;
      pcVar9[9] = '=';
      pcVar9[10] = -99;
      pcVar9[0xb] = 'i';
      pcVar9[0xc] = '\0';
      pcVar9[0xd] = -0x7f;
      pcVar9[0xe] = '\x7f';
      pcVar9[0xf] = -0x6b;
      puVar10 = operator_new(0x20);
      puVar10[0x10] = 0xb0;
      puVar10[0x11] = 0x85;
      puVar10[0x12] = 0x9d;
      puVar10[0x13] = 0xec;
      puVar10[0x14] = 0x8a;
      puVar10[0x15] = 0x83;
      puVar10[0x16] = 'E';
      puVar10[0x17] = 0xa8;
      puVar10[0x18] = 0xa8;
      puVar10[0x19] = 0xd8;
      puVar10[0x1a] = 0x9a;
      puVar10[0x1b] = '=';
      puVar10[0x1c] = 'Z';
      puVar10[0x1d] = '.';
      puVar10[0x1e] = 0xad;
      puVar10[0x1f] = '\x1d';
      puVar10[0] = 0xf7;
      puVar10[1] = '>';
      puVar10[2] = 'y';
      puVar10[3] = '\"';
      puVar10[4] = '!';
      puVar10[5] = 0x96;
      puVar10[6] = 'A';
      puVar10[7] = 0xfc;
      puVar10[8] = '\b';
      puVar10[9] = '\x02';
      puVar10[10] = 0xcc;
      puVar10[0xb] = 0xbc;
      puVar10[0xc] = 0x9b;
      puVar10[0xd] = ' ';
      puVar10[0xe] = '\x12';
      puVar10[0xf] = 0xb9;
      pcVar2 = *(char **)local_38;
      if (*(long *)(local_38 + 8) - (long)pcVar2 == 0x20) {
        auVar20[0] = -(*pcVar9 == *pcVar2);
        auVar20[1] = -(pcVar9[1] == pcVar2[1]);
        auVar20[2] = -(pcVar9[2] == pcVar2[2]);
        auVar20[3] = -(pcVar9[3] == pcVar2[3]);
        auVar20[4] = -(pcVar9[4] == pcVar2[4]);
        auVar20[5] = -(pcVar9[5] == pcVar2[5]);
        auVar20[6] = -(pcVar9[6] == pcVar2[6]);
        auVar20[7] = -(pcVar9[7] == pcVar2[7]);
        auVar20[8] = -(pcVar9[8] == pcVar2[8]);
        auVar20[9] = -(pcVar9[9] == pcVar2[9]);
        auVar20[10] = -(pcVar9[10] == pcVar2[10]);
        auVar20[0xb] = -(pcVar9[0xb] == pcVar2[0xb]);
        auVar20[0xc] = -(pcVar9[0xc] == pcVar2[0xc]);
        auVar20[0xd] = -(pcVar9[0xd] == pcVar2[0xd]);
        auVar20[0xe] = -(pcVar9[0xe] == pcVar2[0xe]);
        auVar20[0xf] = -(pcVar9[0xf] == pcVar2[0xf]);
        auVar18[0] = -(pcVar9[0x10] == pcVar2[0x10]);
        auVar18[1] = -(pcVar9[0x11] == pcVar2[0x11]);
        auVar18[2] = -(pcVar9[0x12] == pcVar2[0x12]);
        auVar18[3] = -(pcVar9[0x13] == pcVar2[0x13]);
        auVar18[4] = -(pcVar9[0x14] == pcVar2[0x14]);
        auVar18[5] = -(pcVar9[0x15] == pcVar2[0x15]);
        auVar18[6] = -(pcVar9[0x16] == pcVar2[0x16]);
        auVar18[7] = -(pcVar9[0x17] == pcVar2[0x17]);
        auVar18[8] = -(pcVar9[0x18] == pcVar2[0x18]);
        auVar18[9] = -(pcVar9[0x19] == pcVar2[0x19]);
        auVar18[10] = -(pcVar9[0x1a] == pcVar2[0x1a]);
        auVar18[0xb] = -(pcVar9[0x1b] == pcVar2[0x1b]);
        auVar18[0xc] = -(pcVar9[0x1c] == pcVar2[0x1c]);
        auVar18[0xd] = -(pcVar9[0x1d] == pcVar2[0x1d]);
        auVar18[0xe] = -(pcVar9[0x1e] == pcVar2[0x1e]);
        auVar18[0xf] = -(pcVar9[0x1f] == pcVar2[0x1f]);
        auVar18 = auVar18 & auVar20;
        bVar16 = (ushort)((ushort)(SUB161(auVar18 >> 7,0) & 1) |
                          (ushort)(SUB161(auVar18 >> 0xf,0) & 1) << 1 |
                          (ushort)(SUB161(auVar18 >> 0x17,0) & 1) << 2 |
                          (ushort)(SUB161(auVar18 >> 0x1f,0) & 1) << 3 |
                          (ushort)(SUB161(auVar18 >> 0x27,0) & 1) << 4 |
                          (ushort)(SUB161(auVar18 >> 0x2f,0) & 1) << 5 |
                          (ushort)(SUB161(auVar18 >> 0x37,0) & 1) << 6 |
                          (ushort)(SUB161(auVar18 >> 0x3f,0) & 1) << 7 |
                          (ushort)(SUB161(auVar18 >> 0x47,0) & 1) << 8 |
                          (ushort)(SUB161(auVar18 >> 0x4f,0) & 1) << 9 |
                          (ushort)(SUB161(auVar18 >> 0x57,0) & 1) << 10 |
                          (ushort)(SUB161(auVar18 >> 0x5f,0) & 1) << 0xb |
                          (ushort)(SUB161(auVar18 >> 0x67,0) & 1) << 0xc |
                          (ushort)(SUB161(auVar18 >> 0x6f,0) & 1) << 0xd |
                          (ushort)(SUB161(auVar18 >> 0x77,0) & 1) << 0xe |
                         (ushort)(byte)(auVar18[0xf] >> 7) << 0xf) == 0xffff;
      }
      else {
        bVar16 = false;
      }
      iVar7 = SERestoreInfoLog::get();
      uVar1 = **(uint **)local_38;
      SERestoreInfoLog::printLog
                (iVar7,(char *)((long)&MACH_HEADER.magic + 2),"updateMeasurementDict",
                 "KeyID 0x%X, overwriting with dev %d",
                 (ulong)(uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 |
                        uVar1 << 0x18),(ulong)bVar16);
      if (bVar16 != false) {
        std::vector<unsigned_char,std::allocator<unsigned_char>>::
        __assign_with_size_abi_ne190102_<unsigned_char_const*,unsigned_char_const*>
                  (local_38,puVar10,puVar10 + 0x20,0x20);
      }
    }
    operator_delete(puVar10);
    operator_delete(pcVar9);
  }
LAB_00250378:
  local_68 = (undefined1  [16])0x0;
  local_58 = (vector *)((ulong)local_58 & 0xffffffff00000000);
  iVar7 = (int)((ulong)(*(long *)(this + 0x18) - *(long *)(this + 0x10)) >> 5);
  local_98 = param_1;
  local_70 = (long *)local_68;
  local_50 = this;
  if (iVar7 != 0) {
    do {
      SEFirmwareIter::operator*((SEFirmwareIter *)&local_90);
      lVar12 = local_90;
      local_80 = local_90;
      local_78 = local_88;
      if (local_88 != (long *)0x0) {
        LOCK();
        local_88[1] = local_88[1] + 1;
        UNLOCK();
      }
      if (local_38 == (vector<unsigned_char,std::allocator<unsigned_char>> *)0x0) {
LAB_00250412:
        plVar11 = (long *)std::
                          __tree<std::__value_type<std::vector<unsigned_char,std::allocator<unsigned_char>>,std::shared_ptr<SERestoreInfo::P73BaseDeliveryObject_const>>,std::__map_value_compare<std::vector<unsigned_char,std::allocator<unsigned_char>>,std::__value_type<std::vector<unsigned_char,std::allocator<unsigned_char>>,std::shared_ptr<SERestoreInfo::P73BaseDeliveryObject_const>>,std::less<std::vector<unsigned_char,std::allocator<unsigned_char>>>,true>,std::allocator<std::__value_type<std::vector<unsigned_char,std::allocator<unsigned_char>>,std::shared_ptr<SERestoreInfo::P73BaseDeliveryObject_const>>>>
                          ::find<std::vector<unsigned_char,std::allocator<unsigned_char>>>
                                    ((__tree<std::__value_type<std::vector<unsigned_char,std::allocator<unsigned_char>>,std::shared_ptr<SERestoreInfo::P73BaseDeliveryObject_const>>,std::__map_value_compare<std::vector<unsigned_char,std::allocator<unsigned_char>>,std::__value_type<std::vector<unsigned_char,std::allocator<unsigned_char>>,std::shared_ptr<SERestoreInfo::P73BaseDeliveryObject_const>>,std::less<std::vector<unsigned_char,std::allocator<unsigned_char>>>,true>,std::allocator<std::__value_type<std::vector<unsigned_char,std::allocator<unsigned_char>>,std::shared_ptr<SERestoreInfo::P73BaseDeliveryObject_const>>>>
                                      *)&local_70,(vector *)(lVar12 + 0x40));
        if (plVar11 == (long *)local_68) {
          std::
          __tree<std::__value_type<std::vector<unsigned_char,std::allocator<unsigned_char>>,std::shared_ptr<SERestoreInfo::P73BaseDeliveryObject_const>>,std::__map_value_compare<std::vector<unsigned_char,std::allocator<unsigned_char>>,std::__value_type<std::vector<unsigned_char,std::allocator<unsigned_char>>,std::shared_ptr<SERestoreInfo::P73BaseDeliveryObject_const>>,std::less<std::vector<unsigned_char,std::allocator<unsigned_char>>>,true>,std::allocator<std::__value_type<std::vector<unsigned_char,std::allocator<unsigned_char>>,std::shared_ptr<SERestoreInfo::P73BaseDeliveryObject_const>>>>
          ::
          __emplace_unique_key_args<std::vector<unsigned_char,std::allocator<unsigned_char>>,std::vector<unsigned_char,std::allocator<unsigned_char>>const&,std::shared_ptr<SERestoreInfo::P73BaseDeliveryObject_const>>
                    ((vector *)&local_70,(vector *)(local_80 + 0x40),(vector *)(local_80 + 0x40));
        }
        else if (*(uint *)(plVar11[7] + 0xa0) < *(uint *)(local_80 + 0xa0)) {
          local_a0 = (piecewise_construct_t *)(local_80 + 0x40);
          lVar12 = std::
                   __tree<std::__value_type<std::vector<unsigned_char,std::allocator<unsigned_char>>,std::shared_ptr<SERestoreInfo::P73BaseDeliveryObject_const>>,std::__map_value_compare<std::vector<unsigned_char,std::allocator<unsigned_char>>,std::__value_type<std::vector<unsigned_char,std::allocator<unsigned_char>>,std::shared_ptr<SERestoreInfo::P73BaseDeliveryObject_const>>,std::less<std::vector<unsigned_char,std::allocator<unsigned_char>>>,true>,std::allocator<std::__value_type<std::vector<unsigned_char,std::allocator<unsigned_char>>,std::shared_ptr<SERestoreInfo::P73BaseDeliveryObject_const>>>>
                   ::
                   __emplace_unique_key_args<std::vector<unsigned_char,std::allocator<unsigned_char>>,std::piecewise_construct_t_const&,std::tuple<std::vector<unsigned_char,std::allocator<unsigned_char>>const&>,std::tuple<>>
                             ((vector *)&local_70,local_a0,(tuple *)&std::piecewise_construct,
                              (tuple *)&local_a0);
          std::shared_ptr<SERestoreInfo::P73BaseDeliveryObject_const>::operator=[abi_ne190102_
                    ((shared_ptr<SERestoreInfo::P73BaseDeliveryObject_const> *)(lVar12 + 0x38),
                     (shared_ptr *)&local_80);
        }
      }
      else {
        sVar14 = *(long *)(local_90 + 0x48) - (long)*(void **)(local_90 + 0x40);
        if ((sVar14 == *(long *)(local_38 + 8) - (long)*(void **)local_38) &&
           (iVar8 = _memcmp(*(void **)(local_90 + 0x40),*(void **)local_38,sVar14), iVar8 == 0))
        goto LAB_00250412;
      }
      if (local_78 != (long *)0x0) {
        LOCK();
        plVar11 = local_78 + 1;
        lVar12 = *plVar11;
        *plVar11 = *plVar11 + -1;
        UNLOCK();
        if (lVar12 == 0) {
          (**(code **)(*local_78 + 0x10))(local_78);
          std::__shared_weak_count::__release_weak();
        }
      }
      if (local_88 != (long *)0x0) {
        LOCK();
        plVar11 = local_88 + 1;
        lVar12 = *plVar11;
        *plVar11 = *plVar11 + -1;
        UNLOCK();
        if (lVar12 == 0) {
          (**(code **)(*local_88 + 0x10))(local_88);
          std::__shared_weak_count::__release_weak();
        }
      }
      uVar3 = local_98;
      iVar8 = (int)local_58 + 1;
      local_58 = (vector *)CONCAT44(local_58._4_4_,iVar8);
    } while (iVar8 != iVar7);
    if (local_68._8_8_ != 0) {
      if (local_70 != (long *)local_68) {
        plVar11 = local_70;
        do {
          local_58 = (vector *)0x0;
          (**(code **)(*(long *)plVar11[7] + 0x10))((long *)plVar11[7],uVar3,&local_58);
          if (local_58 != (vector *)0x0) {
            pSVar13 = (SEException *)___cxa_allocate_exception(0x48);
            SEException::SEException(pSVar13,(__CFError *)local_58);
                    /* WARNING: Subroutine does not return */
            ___cxa_throw(pSVar13,&SEException::typeinfo,SEException::~SEException);
          }
          plVar6 = (long *)plVar11[1];
          plVar15 = plVar11;
          if ((long *)plVar11[1] == (long *)0x0) {
            do {
              plVar11 = (long *)plVar15[2];
              bVar16 = (long *)*plVar11 != plVar15;
              plVar15 = plVar11;
            } while (bVar16);
          }
          else {
            do {
              plVar11 = plVar6;
              plVar6 = (long *)*plVar11;
            } while ((long *)*plVar11 != (long *)0x0);
          }
        } while (plVar11 != (long *)local_68);
      }
      std::
      __tree<std::__value_type<std::vector<unsigned_char,std::allocator<unsigned_char>>,std::shared_ptr<SERestoreInfo::P73BaseDeliveryObject_const>>,std::__map_value_compare<std::vector<unsigned_char,std::allocator<unsigned_char>>,std::__value_type<std::vector<unsigned_char,std::allocator<unsigned_char>>,std::shared_ptr<SERestoreInfo::P73BaseDeliveryObject_const>>,std::less<std::vector<unsigned_char,std::allocator<unsigned_char>>>,true>,std::allocator<std::__value_type<std::vector<unsigned_char,std::allocator<unsigned_char>>,std::shared_ptr<SERestoreInfo::P73BaseDeliveryObject_const>>>>
      ::destroy((__tree<std::__value_type<std::vector<unsigned_char,std::allocator<unsigned_char>>,std::shared_ptr<SERestoreInfo::P73BaseDeliveryObject_const>>,std::__map_value_compare<std::vector<unsigned_char,std::allocator<unsigned_char>>,std::__value_type<std::vector<unsigned_char,std::allocator<unsigned_char>>,std::shared_ptr<SERestoreInfo::P73BaseDeliveryObject_const>>,std::less<std::vector<unsigned_char,std::allocator<unsigned_char>>>,true>,std::allocator<std::__value_type<std::vector<unsigned_char,std::allocator<unsigned_char>>,std::shared_ptr<SERestoreInfo::P73BaseDeliveryObject_const>>>>
                 *)&local_70,(__tree_node *)local_68._0_8_);
      pvVar5 = local_38;
      local_38 = (vector<unsigned_char,std::allocator<unsigned_char>> *)0x0;
      if (pvVar5 != (vector<unsigned_char,std::allocator<unsigned_char>> *)0x0) {
        std::default_delete<std::vector<unsigned_char,std::allocator<unsigned_char>>>::
        operator()[abi_ne190102_
                  ((default_delete<std::vector<unsigned_char,std::allocator<unsigned_char>>> *)
                   &local_38,(vector *)pvVar5);
      }
      return;
    }
  }
  pSVar13 = (SEException *)___cxa_allocate_exception(0x48);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8ne190102ILi0EEEPKc
            (&local_58,"No matching delivery object found.");
  SEException::SEException(pSVar13,(string *)&local_58,0x18,(__CFString *)&cf_SEUpdaterErrorDomain);
                    /* WARNING: Subroutine does not return */
  ___cxa_throw(pSVar13,&SEException::typeinfo,SEException::~SEException);
}


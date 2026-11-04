// rea decompile_all
// name: _AMRestoreModeDeviceConnectToPortOneShot
// address: 0xcefd2
// body: available
// range: 0xcefd2-0xcf5fd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0xcf5f9 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* _AMRestoreModeDeviceConnectToPortOneShot(__AMRestoreModeDevice*, unsigned short, unsigned long,
   int*) */

uint _AMRestoreModeDeviceConnectToPortOneShot
               (__AMRestoreModeDevice *param_1,ushort param_2,ulong param_3,int *param_4)

{
  __AMRestoreModeDevice _Var1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  uint *puVar7;
  uint uVar8;
  undefined6 in_register_00000032;
  uint uVar9;
  byte bVar10;
  sockaddr local_938;
  undefined4 local_928;
  undefined4 uStack_924;
  undefined4 uStack_920;
  int *local_910;
  undefined *local_908;
  undefined4 local_8fc;
  undefined4 local_8f8;
  socklen_t local_8f4;
  undefined4 local_8f0;
  uint local_8ec;
  ulong local_8e8;
  ushort local_8dc;
  byte local_8d9;
  int local_8d8 [260];
  sockaddr local_4c8;
  undefined8 local_4b8;
  undefined8 uStack_4b0;
  undefined8 local_4a8;
  undefined8 uStack_4a0;
  undefined8 local_498;
  undefined8 uStack_490;
  undefined8 local_488;
  undefined8 uStack_480;
  undefined8 local_478;
  undefined8 uStack_470;
  undefined8 local_468;
  undefined8 uStack_460;
  undefined8 local_458;
  undefined8 uStack_450;
  char local_448 [1040];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  local_8fc = 1;
  local_8f8 = 0;
  local_8ec = (uint)*(ushort *)(param_1 + 0x50);
  if ((local_8ec == 0x1298) || ((*(uint *)(param_1 + 0x94) & 0xfffffff0) == 0xf0)) {
    local_908 = &_RAMROD_SOCKET_TIMEOUTS_FPGA;
  }
  else {
    local_908 = &_RAMROD_SOCKET_TIMEOUTS_NORMAL;
  }
  _Var1 = param_1[0x7e];
  local_938.sa_data._2_4_ = *(undefined4 *)(param_1 + 0x58);
  local_938.sa_data._6_4_ = *(undefined4 *)(param_1 + 0x5c);
  local_938.sa_data._10_4_ = *(undefined4 *)(param_1 + 0x60);
  local_928 = *(undefined4 *)(param_1 + 100);
  uStack_924 = *(undefined4 *)(param_1 + 0x68);
  uStack_920 = *(undefined4 *)(param_1 + 0x6c);
  local_8f0 = (undefined4)CONCAT62(in_register_00000032,param_2);
  local_8dc = param_2 << 8 | param_2 >> 8;
  local_938._0_2_ = SUB42(*(undefined4 *)(param_1 + 0x54),0);
  local_938.sa_data[0] = (char)local_8dc;
  local_938.sa_data[1] = (char)(local_8dc >> 8);
  local_910 = param_4;
  ___bzero(local_448,0x401);
  _ramrod_socket_sockaddr_to_string(local_448,0x401,&local_938,"<unknown>");
  if (((((uint)param_3 >> 9 & 1) == 0) && (param_1[0x7d] != (__AMRestoreModeDevice)0x0)) &&
     (CONCAT44(local_938.sa_data._10_4_,local_938.sa_data._6_4_) != 0 ||
      CONCAT44(uStack_924,local_928) != 0)) {
    local_8d9 = (byte)_Var1 | (byte)param_3;
    bVar10 = (local_8d9 ^ 1) & (byte)(((uint)param_3 & 2) >> 1);
    if (((param_3 & 0x10) == 0 & bVar10) != 0) goto LAB_000cf0ff;
    local_8e8 = param_3;
    iVar3 = _socket((uint)local_938._0_4_ >> 8 & 0xff,1,0);
    if (iVar3 == -1) {
      puVar7 = (uint *)___error();
      uVar2 = *puVar7;
LAB_000cf515:
      uVar5 = uVar2 - 0x27;
      uVar8 = (uint)local_8e8;
      if (((0x1a < uVar5) ||
          ((uVar9 = 0x27, (0x4000441U >> (uVar5 & 0x1f) & 1) == 0 &&
           (uVar9 = uVar2, (0x600000U >> (uVar5 & 0x1f) & 1) == 0)))) && (uVar9 = 0x27, uVar2 != 1))
      goto LAB_000cf223;
      goto LAB_000cf105;
    }
    _ramrod_socket_set_idle_timeouts_active(iVar3,local_908);
    _ramrod_socket_set_nosigpipe(iVar3,1);
    iVar4 = 0x100000;
    if (*(int *)(param_1 + 0x80) != 0) {
      iVar4 = *(int *)(param_1 + 0x80);
    }
    _ramrod_socket_set_buffer_limits(iVar3,iVar4,*(undefined4 *)(param_1 + 0x84));
    if (((uint)local_8e8 & 9) == 8) {
      local_8d8[0] = 200;
      _setsockopt(iVar3,0xffff,0x1086,local_8d8,4);
    }
    _setsockopt(iVar3,0xffff,0x1118,&local_8f8,4);
    iVar4 = _connect(iVar3,&local_938,0x1c);
    if (iVar4 == 0) {
LAB_000cf3d6:
      local_458 = 0;
      uStack_450 = 0;
      local_468 = 0;
      uStack_460 = 0;
      local_478 = 0;
      uStack_470 = 0;
      local_488 = 0;
      uStack_480 = 0;
      local_498 = 0;
      uStack_490 = 0;
      local_4a8 = 0;
      uStack_4a0 = 0;
      local_4b8 = 0;
      uStack_4b0 = 0;
      local_4c8.sa_len = '\0';
      local_4c8.sa_family = '\0';
      local_4c8.sa_data[0] = '\0';
      local_4c8.sa_data[1] = '\0';
      local_4c8.sa_data[2] = '\0';
      local_4c8.sa_data[3] = '\0';
      local_4c8.sa_data[4] = '\0';
      local_4c8.sa_data[5] = '\0';
      local_4c8.sa_data[6] = '\0';
      local_4c8.sa_data[7] = '\0';
      local_4c8.sa_data[8] = '\0';
      local_4c8.sa_data[9] = '\0';
      local_4c8.sa_data[10] = '\0';
      local_4c8.sa_data[0xb] = '\0';
      local_4c8.sa_data[0xc] = '\0';
      local_4c8.sa_data[0xd] = '\0';
      local_8f4 = 0x80;
      _getsockname(iVar3,&local_4c8,&local_8f4);
      ___bzero(local_8d8,0x401);
      _ramrod_socket_sockaddr_to_string(local_8d8,0x401,&local_4c8,"<unknown>");
      _AMRLog(6,&cf_sock_3d_connectedto_sas_s,iVar3,local_448,local_8d8);
      _ramrod_socket_set_nosigpipe(iVar3,1);
      if ((local_8d9 & 1) != 0) {
        _ramrod_socket_set_keepalive(iVar3,1);
      }
    }
    else {
      puVar7 = (uint *)___error();
      uVar2 = *puVar7;
      if (uVar2 == 0) goto LAB_000cf3d6;
      if ((uVar2 != 0x41) || ((local_8ec != 0x8600 && (local_8ec != 0x8233)))) {
LAB_000cf4e3:
        pcVar6 = _strerror(uVar2);
        _AMRLog(3,&cf_sock_3d_connectingto_sfailed__s__d_,iVar3,local_448,pcVar6,uVar2);
        _close(iVar3);
        goto LAB_000cf515;
      }
      if ((local_8e8 & 2) != 0) {
        _close(iVar3);
        param_3 = local_8e8;
        goto LAB_000cf0ff;
      }
      iVar4 = _setsockopt(iVar3,0xffff,0x1118,&local_8fc,4);
      if ((iVar4 != 0) || (iVar4 = _connect(iVar3,&local_938,0x1c), iVar4 != 0)) goto LAB_000cf4e3;
      local_458 = 0;
      uStack_450 = 0;
      local_468 = 0;
      uStack_460 = 0;
      local_478 = 0;
      uStack_470 = 0;
      local_488 = 0;
      uStack_480 = 0;
      local_498 = 0;
      uStack_490 = 0;
      local_4a8 = 0;
      uStack_4a0 = 0;
      local_4b8 = 0;
      uStack_4b0 = 0;
      local_4c8.sa_len = '\0';
      local_4c8.sa_family = '\0';
      local_4c8.sa_data[0] = '\0';
      local_4c8.sa_data[1] = '\0';
      local_4c8.sa_data[2] = '\0';
      local_4c8.sa_data[3] = '\0';
      local_4c8.sa_data[4] = '\0';
      local_4c8.sa_data[5] = '\0';
      local_4c8.sa_data[6] = '\0';
      local_4c8.sa_data[7] = '\0';
      local_4c8.sa_data[8] = '\0';
      local_4c8.sa_data[9] = '\0';
      local_4c8.sa_data[10] = '\0';
      local_4c8.sa_data[0xb] = '\0';
      local_4c8.sa_data[0xc] = '\0';
      local_4c8.sa_data[0xd] = '\0';
      local_8f4 = 0x80;
      _getsockname(iVar3,&local_4c8,&local_8f4);
      ___bzero(local_8d8,0x401);
      _ramrod_socket_sockaddr_to_string(local_8d8,0x401,&local_4c8,"<unknown>");
      _AMRLog(6,&cf_sock_3d_connectedto_sas_s,iVar3,local_448,local_8d8);
      _ramrod_socket_set_nosigpipe(iVar3,1);
    }
    if (bVar10 != 0) {
      _ramrod_socket_shutdown(iVar3,2);
    }
    *local_910 = iVar3;
LAB_000cf4a1:
    uVar2 = 0;
  }
  else {
LAB_000cf0ff:
    uVar8 = (uint)param_3;
    uVar9 = 0x27;
LAB_000cf105:
    if (param_1[0x7c] == (__AMRestoreModeDevice)0x1) {
      uVar2 = *(uint *)(param_1 + 0x48);
      if (uVar2 != 0 && (uVar8 >> 8 & 1) == 0) {
        local_448[0xf0] = '\0';
        local_448[0xf1] = '\0';
        local_448[0xf2] = '\0';
        local_448[0xf3] = '\0';
        local_448[0xf4] = '\0';
        local_448[0xf5] = '\0';
        local_448[0xf6] = '\0';
        local_448[0xf7] = '\0';
        local_448[0xf8] = '\0';
        local_448[0xf9] = '\0';
        local_448[0xfa] = '\0';
        local_448[0xfb] = '\0';
        local_448[0xfc] = '\0';
        local_448[0xfd] = '\0';
        local_448[0xfe] = '\0';
        local_448[0xff] = '\0';
        local_448[0xe0] = '\0';
        local_448[0xe1] = '\0';
        local_448[0xe2] = '\0';
        local_448[0xe3] = '\0';
        local_448[0xe4] = '\0';
        local_448[0xe5] = '\0';
        local_448[0xe6] = '\0';
        local_448[0xe7] = '\0';
        local_448[0xe8] = '\0';
        local_448[0xe9] = '\0';
        local_448[0xea] = '\0';
        local_448[0xeb] = '\0';
        local_448[0xec] = '\0';
        local_448[0xed] = '\0';
        local_448[0xee] = '\0';
        local_448[0xef] = '\0';
        local_448[0xd0] = '\0';
        local_448[0xd1] = '\0';
        local_448[0xd2] = '\0';
        local_448[0xd3] = '\0';
        local_448[0xd4] = '\0';
        local_448[0xd5] = '\0';
        local_448[0xd6] = '\0';
        local_448[0xd7] = '\0';
        local_448[0xd8] = '\0';
        local_448[0xd9] = '\0';
        local_448[0xda] = '\0';
        local_448[0xdb] = '\0';
        local_448[0xdc] = '\0';
        local_448[0xdd] = '\0';
        local_448[0xde] = '\0';
        local_448[0xdf] = '\0';
        local_448[0xc0] = '\0';
        local_448[0xc1] = '\0';
        local_448[0xc2] = '\0';
        local_448[0xc3] = '\0';
        local_448[0xc4] = '\0';
        local_448[0xc5] = '\0';
        local_448[0xc6] = '\0';
        local_448[199] = '\0';
        local_448[200] = '\0';
        local_448[0xc9] = '\0';
        local_448[0xca] = '\0';
        local_448[0xcb] = '\0';
        local_448[0xcc] = '\0';
        local_448[0xcd] = '\0';
        local_448[0xce] = '\0';
        local_448[0xcf] = '\0';
        local_448[0xb0] = '\0';
        local_448[0xb1] = '\0';
        local_448[0xb2] = '\0';
        local_448[0xb3] = '\0';
        local_448[0xb4] = '\0';
        local_448[0xb5] = '\0';
        local_448[0xb6] = '\0';
        local_448[0xb7] = '\0';
        local_448[0xb8] = '\0';
        local_448[0xb9] = '\0';
        local_448[0xba] = '\0';
        local_448[0xbb] = '\0';
        local_448[0xbc] = '\0';
        local_448[0xbd] = '\0';
        local_448[0xbe] = '\0';
        local_448[0xbf] = '\0';
        local_448[0xa0] = '\0';
        local_448[0xa1] = '\0';
        local_448[0xa2] = '\0';
        local_448[0xa3] = '\0';
        local_448[0xa4] = '\0';
        local_448[0xa5] = '\0';
        local_448[0xa6] = '\0';
        local_448[0xa7] = '\0';
        local_448[0xa8] = '\0';
        local_448[0xa9] = '\0';
        local_448[0xaa] = '\0';
        local_448[0xab] = '\0';
        local_448[0xac] = '\0';
        local_448[0xad] = '\0';
        local_448[0xae] = '\0';
        local_448[0xaf] = '\0';
        local_448[0x90] = '\0';
        local_448[0x91] = '\0';
        local_448[0x92] = '\0';
        local_448[0x93] = '\0';
        local_448[0x94] = '\0';
        local_448[0x95] = '\0';
        local_448[0x96] = '\0';
        local_448[0x97] = '\0';
        local_448[0x98] = '\0';
        local_448[0x99] = '\0';
        local_448[0x9a] = '\0';
        local_448[0x9b] = '\0';
        local_448[0x9c] = '\0';
        local_448[0x9d] = '\0';
        local_448[0x9e] = '\0';
        local_448[0x9f] = '\0';
        local_448[0x80] = '\0';
        local_448[0x81] = '\0';
        local_448[0x82] = '\0';
        local_448[0x83] = '\0';
        local_448[0x84] = '\0';
        local_448[0x85] = '\0';
        local_448[0x86] = '\0';
        local_448[0x87] = '\0';
        local_448[0x88] = '\0';
        local_448[0x89] = '\0';
        local_448[0x8a] = '\0';
        local_448[0x8b] = '\0';
        local_448[0x8c] = '\0';
        local_448[0x8d] = '\0';
        local_448[0x8e] = '\0';
        local_448[0x8f] = '\0';
        local_448[0x70] = '\0';
        local_448[0x71] = '\0';
        local_448[0x72] = '\0';
        local_448[0x73] = '\0';
        local_448[0x74] = '\0';
        local_448[0x75] = '\0';
        local_448[0x76] = '\0';
        local_448[0x77] = '\0';
        local_448[0x78] = '\0';
        local_448[0x79] = '\0';
        local_448[0x7a] = '\0';
        local_448[0x7b] = '\0';
        local_448[0x7c] = '\0';
        local_448[0x7d] = '\0';
        local_448[0x7e] = '\0';
        local_448[0x7f] = '\0';
        local_448[0x60] = '\0';
        local_448[0x61] = '\0';
        local_448[0x62] = '\0';
        local_448[99] = '\0';
        local_448[100] = '\0';
        local_448[0x65] = '\0';
        local_448[0x66] = '\0';
        local_448[0x67] = '\0';
        local_448[0x68] = '\0';
        local_448[0x69] = '\0';
        local_448[0x6a] = '\0';
        local_448[0x6b] = '\0';
        local_448[0x6c] = '\0';
        local_448[0x6d] = '\0';
        local_448[0x6e] = '\0';
        local_448[0x6f] = '\0';
        local_448[0x50] = '\0';
        local_448[0x51] = '\0';
        local_448[0x52] = '\0';
        local_448[0x53] = '\0';
        local_448[0x54] = '\0';
        local_448[0x55] = '\0';
        local_448[0x56] = '\0';
        local_448[0x57] = '\0';
        local_448[0x58] = '\0';
        local_448[0x59] = '\0';
        local_448[0x5a] = '\0';
        local_448[0x5b] = '\0';
        local_448[0x5c] = '\0';
        local_448[0x5d] = '\0';
        local_448[0x5e] = '\0';
        local_448[0x5f] = '\0';
        local_448[0x40] = '\0';
        local_448[0x41] = '\0';
        local_448[0x42] = '\0';
        local_448[0x43] = '\0';
        local_448[0x44] = '\0';
        local_448[0x45] = '\0';
        local_448[0x46] = '\0';
        local_448[0x47] = '\0';
        local_448[0x48] = '\0';
        local_448[0x49] = '\0';
        local_448[0x4a] = '\0';
        local_448[0x4b] = '\0';
        local_448[0x4c] = '\0';
        local_448[0x4d] = '\0';
        local_448[0x4e] = '\0';
        local_448[0x4f] = '\0';
        local_448[0x30] = '\0';
        local_448[0x31] = '\0';
        local_448[0x32] = '\0';
        local_448[0x33] = '\0';
        local_448[0x34] = '\0';
        local_448[0x35] = '\0';
        local_448[0x36] = '\0';
        local_448[0x37] = '\0';
        local_448[0x38] = '\0';
        local_448[0x39] = '\0';
        local_448[0x3a] = '\0';
        local_448[0x3b] = '\0';
        local_448[0x3c] = '\0';
        local_448[0x3d] = '\0';
        local_448[0x3e] = '\0';
        local_448[0x3f] = '\0';
        local_448[0x20] = '\0';
        local_448[0x21] = '\0';
        local_448[0x22] = '\0';
        local_448[0x23] = '\0';
        local_448[0x24] = '\0';
        local_448[0x25] = '\0';
        local_448[0x26] = '\0';
        local_448[0x27] = '\0';
        local_448[0x28] = '\0';
        local_448[0x29] = '\0';
        local_448[0x2a] = '\0';
        local_448[0x2b] = '\0';
        local_448[0x2c] = '\0';
        local_448[0x2d] = '\0';
        local_448[0x2e] = '\0';
        local_448[0x2f] = '\0';
        local_448[0x10] = '\0';
        local_448[0x11] = '\0';
        local_448[0x12] = '\0';
        local_448[0x13] = '\0';
        local_448[0x14] = '\0';
        local_448[0x15] = '\0';
        local_448[0x16] = '\0';
        local_448[0x17] = '\0';
        local_448[0x18] = '\0';
        local_448[0x19] = '\0';
        local_448[0x1a] = '\0';
        local_448[0x1b] = '\0';
        local_448[0x1c] = '\0';
        local_448[0x1d] = '\0';
        local_448[0x1e] = '\0';
        local_448[0x1f] = '\0';
        local_448[0] = '\0';
        local_448[1] = '\0';
        local_448[2] = '\0';
        local_448[3] = '\0';
        local_448[4] = '\0';
        local_448[5] = '\0';
        local_448[6] = '\0';
        local_448[7] = '\0';
        local_448[8] = '\0';
        local_448[9] = '\0';
        local_448[10] = '\0';
        local_448[0xb] = '\0';
        local_448[0xc] = '\0';
        local_448[0xd] = '\0';
        local_448[0xe] = '\0';
        local_448[0xf] = '\0';
        _snprintf(local_448,0x100,"[usbmux_%u]:%d",(ulong)uVar2,(ulong)(ushort)local_8f0);
        local_8d8[0] = -1;
        uVar2 = _USBMuxConnectByPort(uVar2,local_8dc,local_8d8);
        iVar3 = local_8d8[0];
        if (uVar2 == 0) {
          _AMRLog(6,&cf_sock_3d_connectedto_s,local_8d8[0],local_448);
          _ramrod_socket_set_nosigpipe(local_8d8[0],1);
          *local_910 = local_8d8[0];
          goto LAB_000cf4a1;
        }
        pcVar6 = _strerror(uVar2);
        _AMRLog(3,&cf_sock_3d_connectingto_sfailed__s__d_,iVar3,local_448,pcVar6,uVar2);
        if ((((0x2d < uVar2) || ((0x208000000042U >> ((ulong)uVar2 & 0x3f) & 1) == 0)) &&
            (uVar2 != 0x4b)) && (uVar2 != 0x49)) goto LAB_000cf223;
      }
    }
    uVar2 = uVar9;
  }
LAB_000cf223:
  if (*(long *)PTR____stack_chk_guard_004412b8 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar2;
}


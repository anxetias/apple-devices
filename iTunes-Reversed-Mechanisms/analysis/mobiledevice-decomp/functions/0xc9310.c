// rea decompile_all
// name: _ramrod_receive_message
// address: 0xc9310
// body: available
// range: 0xc9310-0xc957f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0xc957b to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long _ramrod_receive_message(undefined4 param_1)

{
  int iVar1;
  undefined1 *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  long local_1148;
  uint local_113c;
  undefined8 local_1138;
  undefined8 uStack_1130;
  undefined8 local_1128;
  undefined8 uStack_1120;
  undefined8 local_1118;
  undefined8 uStack_1110;
  undefined8 local_1108;
  undefined8 uStack_1100;
  undefined8 local_10f8;
  undefined8 uStack_10f0;
  undefined8 local_10e8;
  undefined8 uStack_10e0;
  undefined8 local_10d8;
  undefined8 uStack_10d0;
  undefined8 local_10c8;
  undefined8 uStack_10c0;
  undefined8 local_10b8;
  undefined8 uStack_10b0;
  undefined8 local_10a8;
  undefined8 uStack_10a0;
  undefined8 local_1098;
  undefined8 uStack_1090;
  undefined8 local_1088;
  undefined8 uStack_1080;
  undefined8 local_1078;
  undefined8 uStack_1070;
  undefined8 local_1068;
  undefined8 uStack_1060;
  undefined8 local_1058;
  undefined8 uStack_1050;
  undefined8 local_1048;
  undefined8 uStack_1040;
  undefined1 local_1038 [4096];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  local_1148 = 0;
  local_113c = 0;
  puVar2 = local_1038;
  ___bzero(puVar2,0x1000);
  iVar1 = __read_buffer(param_1,&local_113c,4,1);
  if (iVar1 == 0) {
    local_113c = local_113c >> 0x18 | (local_113c & 0xff0000) >> 8 | (local_113c & 0xff00) << 8 |
                 local_113c << 0x18;
    uVar6 = (ulong)local_113c;
    if (0x1000 < local_113c) {
      puVar2 = _malloc(uVar6);
    }
    iVar1 = __read_buffer(param_1,puVar2,uVar6,0);
    if (iVar1 == 0) {
      uVar5 = *(undefined8 *)PTR__kCFAllocatorDefault_004410e8;
      lVar3 = _CFDataCreateWithBytesNoCopy
                        (uVar5,puVar2,local_113c,*(undefined8 *)PTR__kCFAllocatorNull_004410f8);
      if (lVar3 == 0) {
        lVar4 = 0;
        _ramrod_message_error("sock %3d: unable to convert message to CFData",param_1);
      }
      else {
        lVar4 = _CFPropertyListCreateWithData(uVar5,lVar3,0,0,&local_1148);
        if (lVar4 == 0) {
          _ramrod_message_error("sock %3d: unable to convert message to property list",param_1);
        }
        if (local_1148 != 0) {
          uVar5 = _CFErrorCopyDescription();
          local_1048 = 0;
          uStack_1040 = 0;
          local_1058 = 0;
          uStack_1050 = 0;
          local_1068 = 0;
          uStack_1060 = 0;
          local_1078 = 0;
          uStack_1070 = 0;
          local_1088 = 0;
          uStack_1080 = 0;
          local_1098 = 0;
          uStack_1090 = 0;
          local_10a8 = 0;
          uStack_10a0 = 0;
          local_10b8 = 0;
          uStack_10b0 = 0;
          local_10c8 = 0;
          uStack_10c0 = 0;
          local_10d8 = 0;
          uStack_10d0 = 0;
          local_10e8 = 0;
          uStack_10e0 = 0;
          local_10f8 = 0;
          uStack_10f0 = 0;
          local_1108 = 0;
          uStack_1100 = 0;
          local_1118 = 0;
          uStack_1110 = 0;
          local_1128 = 0;
          uStack_1120 = 0;
          local_1138 = 0;
          uStack_1130 = 0;
          _CFStringGetCString(uVar5,&local_1138,0x100,0x8000100);
          _ramrod_message_error("sock %3d: CFPropertyListCreateFromXMLData: %s",param_1,&local_1138)
          ;
          _CFRelease(uVar5);
          _CFRelease(local_1148);
        }
        _CFRelease(lVar3);
      }
    }
    else {
      lVar4 = 0;
      _ramrod_message_error("sock %3d: unable to read message: %d",param_1,iVar1);
    }
    if (puVar2 == local_1038) goto LAB_000c9556;
  }
  else {
    if (iVar1 != 0x60) {
      _ramrod_message_error("sock %3d: unable to read message size: %d",param_1,iVar1);
    }
    puVar2 = (undefined1 *)0x0;
    lVar4 = 0;
  }
  _free(puVar2);
LAB_000c9556:
  if (*(long *)PTR____stack_chk_guard_004412b8 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return lVar4;
}


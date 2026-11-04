// rea decompile_all
// name: FUN_100008d87
// address: 0x100008d87
// body: available
// range: 0x100008d87-0x100008f32 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_100008d87(long param_1,undefined1 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 local_50;
  ushort local_4c;
  undefined2 local_4a;
  undefined8 local_48;
  undefined1 local_36 [2];
  char local_34;
  byte local_33;
  undefined1 local_32;
  undefined1 local_31;
  
  iVar1 = (**(code **)(**(long **)(param_1 + 0x158) + 0xd8))();
  if (6 < DAT_100021030) {
    uVar2 = FUN_100008d22(param_1);
    uVar3 = FUN_100000d8c(iVar1);
    FUN_1000008d2(7,0,&cf__spipestatus_s__s,"MuxClearPipeStall",uVar2,uVar3);
  }
  if ((iVar1 + 0x1ffffd40U < 0x2e) &&
     ((0x200000002001U >> ((ulong)(iVar1 + 0x1ffffd40U) & 0x3f) & 1) != 0)) {
    if (4 < DAT_100021030) {
      uVar2 = FUN_100008d22(param_1);
      FUN_1000008d2(5,0,&cf__sdevicedisconnected__s,"MuxClearPipeStall",uVar2);
    }
  }
  else if (iVar1 != 0) {
    (**(code **)(**(long **)(param_1 + 0x158) + 0xd0))
              (*(long **)(param_1 + 0x158),param_2,&local_34,&local_33,&local_32,local_36,&local_31)
    ;
    local_50 = 0x302;
    local_4c = local_33 + 0x80;
    if (local_34 != '\x01') {
      local_4c = (ushort)local_33;
    }
    local_4a = 0;
    local_48 = 0;
    if (local_33 != 0) {
      (**(code **)(**(long **)(param_1 + 0x158) + 0xc0))(*(long **)(param_1 + 0x158),0,&local_50);
    }
    iVar1 = (**(code **)(**(long **)(param_1 + 0x158) + 0x168))(*(long **)(param_1 + 0x158),param_2)
    ;
    if ((iVar1 != 0) && (4 < DAT_100021030)) {
      uVar2 = FUN_100008d22(param_1);
      uVar3 = FUN_100000d8c(iVar1);
      FUN_1000008d2(5,0,&cf__sdevicedisconnected__s__s,"MuxClearPipeStall",uVar2,uVar3);
    }
  }
  return iVar1;
}


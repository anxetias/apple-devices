// rea decompile_all
// name: FUN_10000a61c
// address: 0x10000a61c
// body: available
// range: 0x10000a61c-0x10000a81d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_10000a61c(long param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint uVar7;
  long local_28;
  
  uVar7 = 2;
  if (DAT_100021294 != 0) {
    uVar7 = DAT_100021294;
  }
  iVar3 = FUN_10000878c();
  if (iVar3 == 0) {
    local_28 = FUN_100000aa4("MuxInterfaceVersionSend",0x645,1);
    if (local_28 == 0) {
      iVar3 = -0x1ffffd43;
      if (1 < DAT_100021030) {
        uVar5 = FUN_100008d22(param_1);
        FUN_1000008d2(2,0,&cf__sFailedon_s_outofmemory,"MuxInterfaceVersionSend",uVar5);
      }
    }
    else {
      puVar2 = *(undefined8 **)(local_28 + 0x20);
      *(undefined4 *)(local_28 + 0x48) = 0x14;
      *(long *)(local_28 + 0x40) = param_1;
      *puVar2 = 0;
      puVar2[1] = 0;
      *(undefined4 *)(puVar2 + 2) = 0;
      *(undefined4 *)puVar2 = 0;
      uVar1 = *(uint *)(local_28 + 0x48);
      *(uint *)((long)puVar2 + 4) =
           uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
      *(uint *)(puVar2 + 1) =
           uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 | uVar7 << 0x18;
      *(uint *)((long)puVar2 + 0xc) = (DAT_1000212aa ^ 1) << 0x1b;
      *(undefined4 *)(param_1 + 0x1ac) = 1;
      *(code **)(param_1 + 0x168) = FUN_10000a81e;
      *(undefined8 *)(local_28 + 0x50) = 0;
      *(undefined8 *)(local_28 + 0x58) = 0;
      *(undefined8 *)(local_28 + 0x60) = 0;
      *(undefined8 *)(local_28 + 0x68) = 0;
      *(long *)(local_28 + 0x50) = param_1;
      *(long *)(local_28 + 0x58) = local_28;
      *(code **)(local_28 + 0x68) = FUN_10000aafa;
      *(long *)(local_28 + 0x70) = local_28;
      (**(code **)(**(long **)(param_1 + 0x158) + 0x110))
                (*(long **)(param_1 + 0x158),*(undefined1 *)(param_1 + 0x179),&local_28,0,
                 FUN_10000ab6e,0);
      iVar4 = FUN_10000abce(local_28 + 0x50);
      iVar3 = 0;
      if (iVar4 != 0) {
        *(undefined4 *)(param_1 + 0x1ac) = 0;
        FUN_100000b8b("MuxInterfaceVersionSend",0x66b,local_28);
        iVar3 = iVar4;
        if ((iVar4 != -1) && (2 < DAT_100021030)) {
          uVar5 = FUN_100008d22(param_1);
          uVar6 = FUN_100000d8c(iVar4);
          FUN_1000008d2(3,0,&cf__sWriteAsyncInternalfailedon_s__s,"MuxInterfaceVersionSend",uVar5,
                        uVar6);
        }
      }
    }
  }
  else if (2 < DAT_100021030) {
    uVar5 = FUN_100008d22(param_1);
    uVar6 = FUN_100000d8c(iVar3);
    FUN_1000008d2(3,0,&cf__sStartReadsfailedon_s__s,"MuxInterfaceVersionSend",uVar5,uVar6);
  }
  return iVar3;
}


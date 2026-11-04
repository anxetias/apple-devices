// rea decompile_all
// name: AMRLocalUSBInterface::getFileTransferPipeWithReply:
// address: 0xf37a0
// body: available
// range: 0xf37a0-0xf38f0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x18 bytes */

void AMRLocalUSBInterface::getFileTransferPipeWithReply_
               (ID param_1,SEL param_2,ID param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined2 uVar4;
  uint uVar5;
  bool bVar6;
  undefined2 local_38;
  undefined1 local_35;
  undefined1 local_34;
  byte local_33;
  char local_32;
  char local_31;
  
  local_33 = 0;
  iVar1 = (**(code **)(**(long **)(param_1 + 8) + 0x98))();
  if (iVar1 == 0) {
    uVar5 = 0xff;
    if (local_33 == 0) {
      uVar3 = 0;
      uVar4 = 0;
      iVar1 = 0;
    }
    else {
      uVar5 = 1;
      do {
        local_32 = '\0';
        local_35 = 0;
        local_31 = '\0';
        local_34 = 0;
        local_38 = 0;
        iVar1 = (**(code **)(**(long **)(param_1 + 8) + 0xd0))
                          (*(long **)(param_1 + 8),uVar5 & 0xff,&local_32,&local_35,&local_31,
                           &local_38,&local_34);
        if (iVar1 != 0) {
          uVar3 = _createAndLogUSBError(iVar1,&cf_errorgettinginformationforpipe_d_0x_x,uVar5,iVar1)
          ;
          goto LAB_000f38ab;
        }
        if ((local_31 == '\x02') && (local_32 == '\0')) {
          uVar3 = 0;
          uVar4 = local_38;
          goto LAB_000f38c2;
        }
        bVar6 = uVar5 < local_33;
        uVar5 = uVar5 + 1;
      } while (bVar6);
      uVar3 = 0;
      iVar1 = 0;
LAB_000f38ab:
      uVar5 = 0xff;
      uVar4 = 0;
    }
LAB_000f38c2:
    uVar2 = __AMRestoreErrorForIOReturn(iVar1,0x7da);
    uVar5 = uVar5 & 0xff;
  }
  else {
    uVar3 = _createAndLogUSBError(iVar1,&cf_errorgettingnumberofendpoints_0x_x,iVar1);
    uVar2 = __AMRestoreErrorForIOReturn(iVar1,0x7da);
    uVar5 = 0;
    uVar4 = 0;
  }
  (**(code **)(param_3 + 0x10))(param_3,uVar2,uVar5,uVar4,uVar3);
  return;
}


// rea decompile_all
// name: __DLSendFileForBulkOperation
// address: 0x535d
// body: available
// range: 0x535d-0x5498 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int __DLSendFileForBulkOperation(undefined8 *param_1,int param_2,undefined8 *param_3)

{
  int *piVar1;
  undefined1 *puVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  ssize_t sVar6;
  int *piVar7;
  int iVar8;
  undefined8 uVar9;
  
  piVar1 = (int *)*param_1;
  puVar2 = *(undefined1 **)(piVar1 + 0x2c);
  lVar3 = *(long *)(piVar1 + 0x2e);
  uVar9 = *(undefined8 *)PTR__kCFRunLoopDefaultMode_00015038;
  do {
    while( true ) {
      sVar6 = _read(param_2,puVar2 + 1,lVar3 - 1);
      if (-1 < sVar6) break;
      piVar7 = ___error();
      if (*piVar7 != 4) {
        iVar4 = _DLStatusFromOSStatus(0xffffffff,param_3);
LAB_00005438:
        if (param_3 == (undefined8 *)0x0) {
          uVar9 = 0;
        }
        else {
          uVar9 = *param_3;
        }
        __DLBulkOperationSendFinalChunk(param_1,iVar4,uVar9);
        iVar8 = *(int *)(param_1 + 9);
LAB_0000547b:
        iVar5 = iVar4;
        if (iVar8 != -0xd) {
          iVar5 = iVar8;
        }
        if (iVar8 == 0) {
          iVar5 = iVar4;
        }
        return iVar5;
      }
    }
    if (sVar6 == 0) {
      iVar4 = 0;
      goto LAB_00005438;
    }
    _CFRunLoopRunInMode(0,uVar9,1);
    if (*piVar1 == 4) {
      *(undefined4 *)(param_1 + 9) = 0xfffffff2;
      param_1[10] = &cf_Disconnected;
      iVar4 = 0;
      iVar8 = -0xe;
      goto LAB_0000547b;
    }
    *puVar2 = 0xc;
    __DLBulkOperationSendChunk(param_1,puVar2,sVar6 + 1);
    iVar8 = *(int *)(param_1 + 9);
    if ((iVar8 != 0) && (iVar8 != -0xd)) {
      iVar4 = 0;
      goto LAB_0000547b;
    }
    __DLOperationProgressContextUpdate(param_1 + 2,sVar6);
  } while( true );
}


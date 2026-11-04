// rea decompile_all
// name: __DLCopyFileOnComputer
// address: 0x4935
// body: available
// range: 0x4935-0x4b15 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int __DLCopyFileOnComputer(undefined8 param_1,undefined8 param_2,long *param_3,undefined8 *param_4)

{
  void *pvVar1;
  long lVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  ssize_t sVar8;
  int *piVar9;
  ulong uVar10;
  char *local_48;
  undefined8 *local_40;
  int local_34;
  
  local_48 = (char *)0x0;
  iVar4 = __DLResolveAndValidatePath(*param_3,param_1);
  iVar6 = -1;
  if ((iVar4 == 0) &&
     (iVar4 = __DLResolveAndValidatePath(*param_3,param_2,&local_48,param_4), iVar4 == 0)) {
    iVar5 = _open((char *)0x0,0);
    iVar6 = -1;
    iVar4 = iVar5;
    if ((iVar5 < 0) || (iVar6 = _open(local_48,0x601,0x1a4), iVar4 = iVar6, iVar6 < 0)) {
      iVar4 = _DLStatusFromOSStatus(iVar4,param_4);
    }
    else {
      pvVar1 = *(void **)(*param_3 + 0xb0);
      lVar2 = *(long *)(*param_3 + 0xb8);
      uVar3 = *(undefined8 *)PTR__kCFRunLoopDefaultMode_00015038;
      iVar4 = 0;
      local_40 = param_4;
      local_34 = iVar5;
      do {
        iVar5 = local_34;
        uVar7 = _read(local_34,pvVar1,lVar2 - 1);
        if (uVar7 == 0) goto LAB_00004991;
        if ((long)uVar7 < 1) {
          piVar9 = ___error();
          uVar10 = uVar7;
          if (*piVar9 != 4) {
LAB_00004aea:
            iVar4 = _DLStatusFromOSStatus(uVar10 & 0xffffffff,local_40);
            iVar5 = local_34;
            goto LAB_00004991;
          }
        }
        else {
          uVar10 = 0;
          do {
            sVar8 = _write(iVar6,(void *)((long)pvVar1 + uVar10),uVar7 - uVar10);
            if (sVar8 < 0) {
              piVar9 = ___error();
              if (*piVar9 != 4) goto LAB_00004aea;
            }
            else {
              uVar10 = uVar10 + sVar8;
            }
          } while ((long)uVar10 < (long)uVar7);
        }
        __DLOperationProgressContextUpdate(param_3,uVar7);
        piVar9 = (int *)*param_3;
        _CFRunLoopRunInMode(0,uVar3,1);
      } while (*piVar9 != 4);
      iVar4 = -0xe;
      iVar5 = local_34;
      if (local_40 != (undefined8 *)0x0) {
        *local_40 = &cf_Disconnected;
      }
    }
  }
  else {
    iVar5 = -1;
  }
LAB_00004991:
  _free((void *)0x0);
  _free(local_48);
  _close(iVar5);
  _close(iVar6);
  return iVar4;
}


// rea decompile_all
// name: __AMAuthInstallApFtabCopyFtabFromFile
// address: 0x1a02ee
// body: available
// range: 0x1a02ee-0x1a0475 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 __AMAuthInstallApFtabCopyFtabFromFile(undefined8 param_1,long param_2,long *param_3)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  uint uVar7;
  long local_30;
  ulong uVar8;
  
  local_30 = 0;
  if (param_2 == 0) {
    __AMAuthInstallApFtabCopyFtabFromFile_cold_9();
LAB_001a044c:
    lVar2 = 0;
  }
  else {
    if (param_3 == (long *)0x0) {
      __AMAuthInstallApFtabCopyFtabFromFile_cold_8();
      goto LAB_001a044c;
    }
    iVar1 = _AMAuthInstallPlatformCreateDataFromMappedFileURL(param_1,&local_30,param_2);
    if (iVar1 == 0) {
      if (local_30 == 0) {
        __AMAuthInstallApFtabCopyFtabFromFile_cold_7();
      }
      else {
        lVar2 = _CFDataCreateMutableCopy(*(undefined8 *)PTR__kCFAllocatorDefault_004410e8,0);
        if (lVar2 != 0) {
          uVar3 = _CFDataGetLength(lVar2);
          lVar4 = _CFDataGetBytePtr(lVar2);
          if (uVar3 < 0x30) {
            __AMAuthInstallApFtabCopyFtabFromFile_cold_5();
          }
          else if (*(long *)(lVar4 + 0x20) == 0x62617466736f6b72) {
            uVar7 = *(uint *)(lVar4 + 0x28);
            if (uVar3 < (ulong)uVar7 * 0x10 + 0x30) {
              __AMAuthInstallApFtabCopyFtabFromFile_cold_4();
            }
            else if (uVar7 == 0) {
              __AMAuthInstallApFtabCopyFtabFromFile_cold_3();
            }
            else {
              lVar5 = (ulong)(uVar7 - 1) * 0x10;
              uVar7 = *(int *)(lVar4 + 0x38 + lVar5) + *(int *)(lVar4 + 0x34 + lVar5);
              uVar8 = (ulong)uVar7;
              if ((long)uVar8 <= (long)uVar3) {
                if (uVar8 < uVar3) {
                  _CFDataDeleteBytes(lVar2,uVar7 + 1,uVar3 + ~uVar8);
                }
                *(undefined8 *)(lVar4 + 0x10) = 0;
                uVar6 = _CFRetain(lVar2);
                *param_3 = lVar4;
                goto LAB_001a03f1;
              }
              __AMAuthInstallApFtabCopyFtabFromFile_cold_2();
            }
          }
          else {
            __AMAuthInstallApFtabCopyFtabFromFile_cold_1();
          }
          goto LAB_001a044e;
        }
        __AMAuthInstallApFtabCopyFtabFromFile_cold_6();
      }
      goto LAB_001a044c;
    }
    lVar2 = 0;
    _AMAuthInstallLog(3,"_AMAuthInstallApFtabCopyFtabFromFile",
                      "AMAuthInstallPlatformCreateDataFromMappedFileURL returned %d",iVar1);
  }
LAB_001a044e:
  uVar6 = 0;
LAB_001a03f1:
  _AMSupportSafeRelease(local_30);
  _AMSupportSafeRelease(lVar2);
  return uVar6;
}


// rea decompile_all
// name: _AMAuthInstallSupportCopyPreserveFileURL
// address: 0x29ed0a
// body: available
// range: 0x29ed0a-0x29eeec inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int _AMAuthInstallSupportCopyPreserveFileURL
              (undefined8 param_1,long param_2,undefined8 *param_3,char param_4)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  uint uVar8;
  long lVar9;
  long local_40;
  char local_31;
  
  local_31 = '\x01';
  iVar2 = 1;
  if ((param_2 != 0) && (param_3 != (undefined8 *)0x0)) {
    lVar3 = _CFRetain(param_2);
    local_40 = _CFRetain(param_2);
    lVar6 = 0;
    lVar5 = 0;
    lVar4 = 0;
    uVar8 = 1;
    while( true ) {
      iVar2 = _AMAuthInstallPlatformFileURLExists(lVar3,&local_31);
      if (iVar2 != 0) goto LAB_0029ee81;
      if (local_31 == '\0') break;
      if (lVar4 != 0) {
        _CFRelease(lVar4);
      }
      lVar4 = _CFStringCreateWithFormat(param_1,0,&cf___d,uVar8);
      if (lVar4 == 0) {
        lVar4 = 0;
LAB_0029eee3:
        iVar2 = 2;
        goto LAB_0029ee81;
      }
      if (lVar5 != 0) {
        _CFRelease(lVar5);
      }
      if (lVar6 != 0) {
        _CFRelease(lVar6);
      }
      lVar5 = _CFStringCreateMutable(param_1,0);
      if (lVar5 == 0) {
        lVar5 = 0;
LAB_0029eee0:
        lVar6 = 0;
        goto LAB_0029eee3;
      }
      lVar6 = _CFURLCopyFileSystemPath(param_2,0);
      if (lVar6 == 0) goto LAB_0029eee0;
      _CFStringAppend(lVar5,lVar6);
      _CFStringAppend(lVar5,lVar4);
      if (local_40 != 0) {
        _CFRelease();
      }
      local_40 = _CFRetain(lVar3);
      _CFRelease(lVar3);
      lVar3 = _CFURLCreateWithFileSystemPath(param_1,lVar5,0,0);
      if (lVar3 == 0) {
        iVar2 = 2;
        goto LAB_0029ee93;
      }
      if ((local_31 == '\0') || (bVar1 = 0x1e < uVar8, uVar8 = uVar8 + 1, bVar1)) break;
    }
    lVar9 = lVar3;
    if (param_4 == '\0') {
      lVar9 = local_40;
    }
    uVar7 = _CFRetain(lVar9);
    *param_3 = uVar7;
    iVar2 = 0;
LAB_0029ee81:
    if (lVar3 != 0) {
      _CFRelease(lVar3);
    }
    if (lVar4 != 0) {
LAB_0029ee93:
      _CFRelease(lVar4);
    }
    if (lVar5 != 0) {
      _CFRelease(lVar5);
    }
    if (lVar6 != 0) {
      _CFRelease(lVar6);
    }
    if (local_40 != 0) {
      _CFRelease();
    }
  }
  return iVar2;
}


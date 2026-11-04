// rea decompile_all
// name: _AMDServiceConnectionReceiveMessage
// address: 0x10e93d
// body: available
// range: 0x10e93d-0x10eaea inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint _AMDServiceConnectionReceiveMessage(long param_1,long *param_2,undefined8 param_3)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  void *pvVar4;
  long lVar5;
  ulong uVar6;
  void *pvVar7;
  undefined4 uVar8;
  ulong uVar9;
  uint *puVar10;
  uint local_38;
  undefined4 local_34;
  
  if (param_1 == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = *(undefined4 *)(param_1 + 0x24);
  }
  uVar2 = 0xe8000007;
  if (param_2 != (long *)0x0 && param_1 != 0) {
    puVar10 = &local_38;
    uVar6 = 0;
    do {
      uVar2 = _AMDServiceConnectionReceive(param_1,puVar10,4 - uVar6);
      if ((int)uVar2 < 1) {
        if ((*(int *)(param_1 + 0x24) != 0) && (cVar1 = _isDeviceAttached(), cVar1 == '\0')) {
          return 0xe8000084;
        }
        return (uint)(uVar2 != 0) << 5 | 0xe800000e;
      }
      uVar6 = uVar6 + uVar2;
      puVar10 = (uint *)((long)puVar10 + (ulong)uVar2);
    } while (uVar6 < 4);
    if (local_38 == 0) {
      uVar2 = 0xe8000013;
    }
    else {
      uVar6 = (ulong)(local_38 >> 0x18 | (local_38 & 0xff0000) >> 8 | (local_38 & 0xff00) << 8 |
                     local_38 << 0x18);
      pvVar4 = _malloc(uVar6);
      if (pvVar4 == (void *)0x0) {
        uVar2 = 0xe8000003;
      }
      else {
        uVar9 = 0;
        pvVar7 = pvVar4;
        local_34 = uVar8;
        do {
          uVar3 = _AMDServiceConnectionReceive(param_1,pvVar7,uVar6 - uVar9);
          if ((int)uVar3 < 1) {
            if (*(int *)(param_1 + 0x24) != 0) {
              cVar1 = _isDeviceAttached();
              uVar2 = 0xe8000084;
              if (cVar1 == '\0') goto LAB_0010eab6;
            }
            uVar2 = (uint)(uVar3 != 0) << 5 | 0xe800000e;
            goto LAB_0010eab6;
          }
          uVar9 = uVar9 + uVar3;
          pvVar7 = (void *)((long)pvVar7 + (ulong)uVar3);
        } while (uVar9 < uVar6);
        lVar5 = _CreatePropertyListFromBuffer(param_3,pvVar4,uVar6);
        if (lVar5 == 0) {
          uVar2 = 0xe8000013;
        }
        else {
          *param_2 = lVar5;
          uVar2 = 0;
        }
LAB_0010eab6:
        _free(pvVar4);
      }
    }
  }
  return uVar2;
}


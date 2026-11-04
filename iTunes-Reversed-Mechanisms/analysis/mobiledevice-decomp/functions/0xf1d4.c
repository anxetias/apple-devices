// rea decompile_all
// name: _ccdigest_update_internal
// address: 0xf1d4
// body: available
// range: 0xf1d4-0xf321 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _ccdigest_update_internal(long param_1,long *param_2,ulong param_3,void *param_4)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar6 = *(ulong *)(param_1 + 0x10);
  if (uVar6 <= *(uint *)((long)param_2 + uVar6 + 8 + *(long *)(param_1 + 8))) {
    *(undefined4 *)((long)param_2 + uVar6 + *(long *)(param_1 + 8) + 8) = 0;
  }
  if (param_3 != 0) {
    plVar1 = param_2 + 1;
    do {
      uVar6 = *(ulong *)(param_1 + 0x10);
      uVar4 = *(uint *)((long)plVar1 + uVar6 + *(long *)(param_1 + 8));
      if ((uVar6 < param_3) && (uVar4 == 0)) {
        if (uVar6 == 0x80) {
          uVar5 = param_3 >> 7;
          uVar6 = param_3 & 0xffffffffffffff80;
        }
        else if (uVar6 == 0x40) {
          uVar5 = param_3 >> 6;
          uVar6 = param_3 & 0xffffffffffffffc0;
        }
        else {
          uVar5 = param_3 / uVar6;
          uVar6 = uVar6 * uVar5;
        }
        (**(code **)(param_1 + 0x30))(plVar1,uVar5,param_4);
        *param_2 = *param_2 + uVar6 * 8;
      }
      else {
        uVar6 = uVar6 - uVar4;
        if (param_3 <= uVar6) {
          uVar6 = param_3;
        }
        _memcpy((void *)((long)plVar1 + (ulong)uVar4 + *(long *)(param_1 + 8)),param_4,uVar6);
        uVar5 = *(ulong *)(param_1 + 0x10);
        uVar4 = *(int *)((long)plVar1 + uVar5 + *(long *)(param_1 + 8)) + (int)uVar6;
        *(uint *)((long)plVar1 + uVar5 + *(long *)(param_1 + 8)) = uVar4;
        if (uVar5 == uVar4) {
          (**(code **)(param_1 + 0x30))(plVar1,1);
          lVar2 = *(long *)(param_1 + 8);
          lVar3 = *(long *)(param_1 + 0x10);
          *param_2 = *param_2 + (ulong)(uint)(*(int *)((long)plVar1 + lVar3 + lVar2) << 3);
          *(undefined4 *)((long)plVar1 + lVar3 + lVar2) = 0;
        }
      }
      param_4 = (void *)((long)param_4 + uVar6);
      param_3 = param_3 - uVar6;
    } while (param_3 != 0);
  }
  return;
}


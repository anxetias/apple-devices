// rea decompile_all
// name: _ccaes_vng_ctr_crypt
// address: 0xd91d
// body: available
// range: 0xd91d-0xda84 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _ccaes_vng_ctr_crypt(long *param_1,ulong param_2,long param_3,long param_4)

{
  long lVar1;
  char *pcVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  bool bVar10;
  long local_38;
  
  local_38 = param_1[1];
  if (param_2 != 0) {
    lVar3 = *param_1;
    uVar5 = *(long *)(lVar3 + 8) + 7;
    uVar8 = uVar5 >> 3;
    lVar6 = (long)param_1 + (uVar5 & 0xfffffffffffffff8) + 0x10;
    local_38 = 0;
    lVar9 = param_1[1];
    do {
      lVar7 = lVar9;
      if (lVar7 == 0x10) {
        uVar4 = __get_cpu_capabilities();
        if ((((uVar4 >> 0xc & 1) != 0) && (uVar4 = __get_cpu_capabilities(), 0xf < param_2)) &&
           ((uVar4 & 0x100) != 0)) {
          _aes_ctr_crypt(param_3,param_4,param_2 & 0xfffffff0,lVar6,param_1 + uVar8 * 2 + 2);
          param_4 = param_4 + (param_2 & 0xfffffffffffffff0);
          param_3 = param_3 + (param_2 & 0xfffffffffffffff0);
          param_2 = (ulong)((uint)param_2 & 0xf);
        }
        (**(code **)(lVar3 + 0x18))(param_1 + uVar8 * 2 + 2,1,lVar6,param_1 + 2);
        uVar5 = 0x10;
        do {
          if (uVar5 < 9) break;
          pcVar2 = (char *)((long)param_1 + uVar5 + uVar8 * 8 + 0xf);
          *pcVar2 = *pcVar2 + '\x01';
          uVar5 = uVar5 - 1;
        } while (*pcVar2 == '\0');
        lVar7 = 0;
        if (param_2 == 0) goto LAB_0000da68;
      }
      lVar9 = 0;
      do {
        *(byte *)(param_4 + lVar9) =
             *(byte *)((long)(param_1 + 2) + lVar9 + lVar7) ^ *(byte *)(param_3 + lVar9);
        lVar1 = lVar9 + 1;
        if (0xf < lVar9 + lVar7 + 1U) break;
        bVar10 = param_2 - 1 != lVar9;
        lVar9 = lVar1;
      } while (bVar10);
      param_3 = param_3 + lVar1;
      param_4 = param_4 + lVar1;
      param_2 = param_2 - lVar1;
      lVar9 = lVar7 + lVar1;
    } while (param_2 != 0);
    local_38 = lVar7 + lVar1;
  }
LAB_0000da68:
  param_1[1] = local_38;
  return 0;
}


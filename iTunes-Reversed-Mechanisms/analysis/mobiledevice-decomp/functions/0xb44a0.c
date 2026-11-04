// rea decompile_all
// name: _search
// address: 0xb44a0
// body: available
// range: 0xb44a0-0xb45af inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


size_t _search(long param_1,long param_2,long param_3,void *param_4,size_t param_5,long param_6,
              long param_7,long *param_8)

{
  int iVar1;
  size_t sVar2;
  size_t sVar3;
  size_t sVar4;
  size_t sVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long local_40;
  
  local_40 = param_7;
  uVar6 = param_7 - param_6;
  while (1 < (long)uVar6) {
    lVar7 = (uVar6 >> 1) + param_6;
    lVar8 = *(long *)(param_1 + lVar7 * 8);
    sVar3 = param_3 - lVar8;
    if ((long)param_5 <= (long)sVar3) {
      sVar3 = param_5;
    }
    iVar1 = _memcmp((void *)(lVar8 + param_2),param_4,sVar3);
    lVar8 = lVar7;
    if (0 < iVar1) {
      lVar8 = param_6;
      local_40 = lVar7;
    }
    param_6 = lVar8;
    uVar6 = local_40 - lVar8;
  }
  lVar8 = *(long *)(param_1 + param_6 * 8);
  sVar3 = param_3 - lVar8;
  if ((long)param_5 <= param_3 - lVar8) {
    sVar3 = param_5;
  }
  if ((long)sVar3 < 1) {
    sVar5 = 0;
  }
  else {
    sVar4 = 0;
    do {
      sVar5 = sVar4;
      if (*(char *)(param_2 + lVar8 + sVar4) != *(char *)((long)param_4 + sVar4)) break;
      sVar4 = sVar4 + 1;
      sVar5 = sVar3;
    } while (sVar3 != sVar4);
  }
  lVar7 = *(long *)(param_1 + local_40 * 8);
  sVar3 = param_3 - lVar7;
  if ((long)param_5 <= param_3 - lVar7) {
    sVar3 = param_5;
  }
  if ((long)sVar3 < 1) {
    sVar4 = 0;
  }
  else {
    sVar2 = 0;
    do {
      sVar4 = sVar2;
      if (*(char *)(param_2 + lVar7 + sVar2) != *(char *)((long)param_4 + sVar2)) break;
      sVar2 = sVar2 + 1;
      sVar4 = sVar3;
    } while (sVar3 != sVar2);
  }
  if ((long)sVar4 < (long)sVar5) {
    sVar4 = sVar5;
    lVar7 = lVar8;
  }
  *param_8 = lVar7;
  return sVar4;
}


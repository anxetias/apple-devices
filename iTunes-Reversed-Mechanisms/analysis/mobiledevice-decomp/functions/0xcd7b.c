// rea decompile_all
// name: _ccder_blob_decode_len_internal
// address: 0xcd7b
// body: available
// range: 0xcd7b-0xcee0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _ccder_blob_decode_len_internal(undefined8 *param_1,ulong *param_2,byte param_3)

{
  byte bVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  ulong uVar5;
  
  pcVar2 = (char *)*param_1;
  pcVar3 = (char *)param_1[1];
  if (pcVar3 <= pcVar2 || pcVar2 == (char *)0x0) goto switchD_0000cddc_default;
  pcVar4 = pcVar2 + 1;
  uVar5 = (ulong)*pcVar2;
  if (-1 < (long)uVar5) goto LAB_0000cdaa;
  switch(*pcVar2) {
  case -0x7f:
    if ((pcVar3 == pcVar4 || (long)pcVar3 - (long)pcVar4 < 0) || ((param_3 & -1 < pcVar2[1]) != 0))
    goto switchD_0000cddc_default;
    pcVar4 = pcVar2 + 2;
    uVar5 = (ulong)(byte)pcVar2[1];
    break;
  case -0x7e:
    if (((long)pcVar3 - (long)pcVar4 < 2) || (bVar1 = pcVar2[1], (param_3 & bVar1 == 0) != 0))
    goto switchD_0000cddc_default;
    pcVar4 = pcVar2 + 3;
    uVar5 = (ulong)(byte)pcVar2[2];
    goto LAB_0000ced9;
  case -0x7d:
    if (((long)pcVar3 - (long)pcVar4 < 3) || ((param_3 & pcVar2[1] == 0U) != 0))
    goto switchD_0000cddc_default;
    pcVar4 = pcVar2 + 4;
    uVar5 = (ulong)(byte)pcVar2[3] | (ulong)(byte)pcVar2[1] << 0x10 | (ulong)(byte)pcVar2[2] << 8;
    break;
  case -0x7c:
    if (((long)pcVar3 - (long)pcVar4 < 4) || ((param_3 & pcVar2[1] == 0U) != 0))
    goto switchD_0000cddc_default;
    bVar1 = pcVar2[3];
    pcVar4 = pcVar2 + 5;
    uVar5 = (ulong)((uint)(byte)pcVar2[2] << 0x10 | (uint)(byte)pcVar2[1] << 0x18) |
            (ulong)(byte)pcVar2[4];
LAB_0000ced9:
    uVar5 = uVar5 | (ulong)bVar1 << 8;
    break;
  default:
    goto switchD_0000cddc_default;
  }
LAB_0000cdaa:
  if (uVar5 <= (ulong)((long)pcVar3 - (long)pcVar4)) {
    *param_2 = uVar5;
    *param_1 = pcVar4;
    return CONCAT71((int7)((ulong)((long)pcVar3 - (long)pcVar4) >> 8),1);
  }
switchD_0000cddc_default:
  *param_2 = 0;
  return 0;
}


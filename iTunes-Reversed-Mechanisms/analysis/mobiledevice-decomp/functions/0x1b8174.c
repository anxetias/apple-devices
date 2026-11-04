// rea decompile_all
// name: _DERDecoderGetDataAt
// address: 0x1b8174
// body: available
// range: 0x1b8174-0x1b824c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x001b81ce) */
/* WARNING: Removing unreachable block (ram,0x001b81d3) */
/* WARNING: Removing unreachable block (ram,0x001b81da) */
/* WARNING: Removing unreachable block (ram,0x001b81df) */
/* WARNING: Removing unreachable block (ram,0x001b81e6) */
/* WARNING: Removing unreachable block (ram,0x001b81eb) */
/* WARNING: Removing unreachable block (ram,0x001b81f1) */
/* WARNING: Removing unreachable block (ram,0x001b81f6) */
/* WARNING: Removing unreachable block (ram,0x001b81fc) */
/* WARNING: Removing unreachable block (ram,0x001b8201) */

ulong _DERDecoderGetDataAt(long param_1,int *param_2)

{
  int iVar1;
  ulong uVar2;
  
  if (param_1 == 0) {
    _DERDecoderGetDataAt_cold_2();
  }
  else {
    param_2 = (int *)0x1b821d;
    uVar2 = __DERDecoderTraverseAllItems();
    if ((int)uVar2 != 0) {
      return uVar2;
    }
  }
  _DERDecoderGetDataAt_cold_1();
  iVar1 = *param_2;
  if (iVar1 != param_2[1]) {
    *param_2 = iVar1 + 1;
  }
  else {
    *(undefined8 *)(param_2 + 5) = *(undefined8 *)(param_1 + 0xc);
    *(undefined8 *)(param_2 + 8) = *(undefined8 *)(param_1 + 0x18);
    param_2[10] = *(int *)(param_1 + 0x20);
  }
  return (ulong)(iVar1 != param_2[1]);
}


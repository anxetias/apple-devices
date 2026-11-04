// rea decompile_all
// name: ____ZL27_ipv6MayStarveDueTo99053849v_block_invoke
// address: 0xd0b53
// body: available
// range: 0xd0b53-0xd0bbc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void ____ZL27_ipv6MayStarveDueTo99053849v_block_invoke(void)

{
  int iVar1;
  bool bVar2;
  size_t local_20;
  int local_14;
  
  local_14 = 0;
  local_20 = 8;
  bVar2 = false;
  iVar1 = ___isPlatformVersionAtLeast(1,0xd,1);
  if (iVar1 == 0) {
    iVar1 = _sysctlbyname("net.classq.fq_codel.radar_99053849",&local_14,&local_20,(void *)0x0,0);
    bVar2 = local_14 == 0 || iVar1 != 0;
  }
  _ipv6MayStarveDueTo99053849()::ipv6MayStarve = bVar2;
  return;
}


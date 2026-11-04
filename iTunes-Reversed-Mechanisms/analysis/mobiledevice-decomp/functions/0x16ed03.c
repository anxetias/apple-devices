// rea decompile_all
// name: ____AMDRemotePairingPairWithCallback_block_invoke
// address: 0x16ed03
// body: available
// range: 0x16ed03-0x16ed2f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void ____AMDRemotePairingPairWithCallback_block_invoke(void)

{
  dispatch_queue_attr_t attr;
  
  attr = (dispatch_queue_attr_t)
         _dispatch_queue_attr_make_with_autorelease_frequency
                   (PTR___dispatch_queue_attr_concurrent_004412d8,1);
  __AMDRemotePairingPairWithCallback_pairingQueue =
       _dispatch_queue_create("com.apple.remotepairing.pairing",attr);
  return;
}


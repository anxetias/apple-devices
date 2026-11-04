// rea decompile_all
// name: _initValRPPairingOutcomeInfoKeyManagedConfigurationChallenge
// address: 0x16eca5
// body: available
// range: 0x16eca5-0x16ed02 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _initValRPPairingOutcomeInfoKeyManagedConfigurationChallenge(void)

{
  undefined8 *puVar1;
  
  if (_RemotePairingLibrary_sOnce_4256 != -1) {
    _dispatch_once(&_RemotePairingLibrary_sOnce_4256,&___block_literal_global_252);
  }
  puVar1 = (undefined8 *)
           _dlsym(_RemotePairingLibrary_sLib_4257,
                  "RPPairingOutcomeInfoKeyManagedConfigurationChallenge");
  if (puVar1 != (undefined8 *)0x0) {
    _constantValRPPairingOutcomeInfoKeyManagedConfigurationChallenge = *puVar1;
  }
  _getRPPairingOutcomeInfoKeyManagedConfigurationChallenge =
       _RPPairingOutcomeInfoKeyManagedConfigurationChallengeFunction;
  return _constantValRPPairingOutcomeInfoKeyManagedConfigurationChallenge;
}


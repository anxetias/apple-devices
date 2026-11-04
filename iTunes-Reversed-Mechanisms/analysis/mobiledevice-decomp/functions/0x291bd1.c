// rea decompile_all
// name: _AMAuthInstallLocalPolicyStitchTicketData
// address: 0x291bd1
// body: available
// range: 0x291bd1-0x291ca0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _AMAuthInstallLocalPolicyStitchTicketData(long param_1,long param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uStack_40;
  
  uStack_40 = 1;
  if (param_1 != 0) {
    uVar1 = _CFGetAllocator();
    if (param_2 != 0) {
      lVar2 = _CFDictionaryGetValue(param_2,&cf_ApImg4Ticket);
      if (lVar2 != 0) {
        lVar3 = _CFDataCreate(uVar1,&_kLocalPolicyIM4P,0x16);
        if (lVar3 != 0) {
          lVar2 = _AMAuthInstallApImg4CreateStitchTicket(uVar1,lVar3,lVar2);
          if (lVar2 == 0) {
            lVar2 = 0;
            uStack_40 = 3;
            _AMAuthInstallLog(3,"AMAuthInstallLocalPolicyStitchTicketData",
                              "failed to stitch local policy object");
          }
          else {
            uStack_40 = 0;
            if (param_3 != (undefined8 *)0x0) {
              uVar1 = _CFRetain(lVar2);
              *param_3 = uVar1;
            }
          }
          goto LAB_00291c61;
        }
        uStack_40 = 2;
      }
    }
  }
  lVar3 = 0;
  lVar2 = 0;
LAB_00291c61:
  _SafeRelease(lVar2);
  _SafeRelease(lVar3);
  return uStack_40;
}


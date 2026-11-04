// rea decompile_all
// name: ACFUFTABFile::setBootNonce
// address: 0x219d22
// body: available
// range: 0x219d22-0x219da1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* ACFUFTABFile::setBootNonce(unsigned long long) */

undefined8 __thiscall ACFUFTABFile::setBootNonce(ACFUFTABFile *this,ulonglong param_1)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  ACFUDataContainer *pAVar4;
  
  pAVar4 = *(ACFUDataContainer **)(this + 8);
  if (pAVar4 == (ACFUDataContainer *)0x0) {
    setBootNonce(0);
  }
  else {
    cVar1 = ACFUDataContainer::isOptimized(pAVar4);
    if (cVar1 == '\0') {
      pAVar4 = *(ACFUDataContainer **)(this + 8);
      lVar2 = ACFUDataContainer::getData(pAVar4);
      if (lVar2 != 0) {
        lVar2 = _CFDataGetBytePtr(lVar2);
        *(ulonglong *)(lVar2 + 8) = param_1;
        uVar3 = ACFULogging::getLogInstance();
        ACFULogging::handleMessage
                  (uVar3,0,"%s::%s: Boot nonce set for FTAB. Boot nonce value: %llu\n",
                   "ACFUFTABFile","setBootNonce",param_1);
        return 1;
      }
      setBootNonce((ulonglong)pAVar4);
    }
    else {
      setBootNonce((ulonglong)pAVar4);
    }
  }
  return 0;
}


// rea decompile_all
// name: ACFUFTABFile::copyFirmwareContainer
// address: 0x21b512
// body: available
// range: 0x21b512-0x21b5f5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* ACFUFTABFile::copyFirmwareContainer() */

__CFData * __thiscall ACFUFTABFile::copyFirmwareContainer(ACFUFTABFile *this)

{
  string *psVar1;
  ACFUFTABFile *pAVar2;
  char cVar3;
  ACFUFTABFile *pAVar4;
  ACFUFTABFile *pAVar5;
  bool bVar6;
  __CFData *local_38;
  
  local_38 = (__CFData *)0x0;
  if (*(long *)(this + 8) == 0) {
    copyFirmwareContainer();
  }
  else {
    local_38 = (__CFData *)ACFUDataContainer::copyData();
    if (local_38 == (__CFData *)0x0) {
      copyFirmwareContainer();
    }
    else {
      cVar3 = ACFUDataContainer::isOptimized(*(ACFUDataContainer **)(this + 8));
      if (cVar3 != '\0') {
        pAVar4 = *(ACFUFTABFile **)(this + 0x48);
        if (pAVar4 != this + 0x50) {
          do {
            psVar1 = (string *)(pAVar4 + 0x20);
            cVar3 = (**(code **)(*(long *)this + 0x10))(this,psVar1);
            if (cVar3 == '\0') {
              cVar3 = addNewFileToFTABOnData(this,psVar1,*(__CFData **)(pAVar4 + 0x38),&local_38);
              if (cVar3 == '\0') {
                copyFirmwareContainer();
                return local_38;
              }
            }
            else {
              cVar3 = updateFileInFTABOnData(this,psVar1,*(__CFData **)(pAVar4 + 0x38),&local_38);
              if (cVar3 == '\0') {
                copyFirmwareContainer();
                return local_38;
              }
            }
            pAVar2 = *(ACFUFTABFile **)(pAVar4 + 8);
            pAVar5 = pAVar4;
            if (*(ACFUFTABFile **)(pAVar4 + 8) == (ACFUFTABFile *)0x0) {
              do {
                pAVar4 = *(ACFUFTABFile **)(pAVar5 + 0x10);
                bVar6 = *(ACFUFTABFile **)pAVar4 != pAVar5;
                pAVar5 = pAVar4;
              } while (bVar6);
            }
            else {
              do {
                pAVar4 = pAVar2;
                pAVar2 = *(ACFUFTABFile **)pAVar4;
              } while (*(ACFUFTABFile **)pAVar4 != (ACFUFTABFile *)0x0);
            }
          } while (pAVar4 != this + 0x50);
        }
      }
    }
  }
  return local_38;
}


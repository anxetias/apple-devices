// rea decompile_all
// name: RTKitFirmware::getFileSizeByFileName
// address: 0x21ddbc
// body: available
// range: 0x21ddbc-0x21de0a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* RTKitFirmware::getFileSizeByFileName(std::string const&) */

undefined8 __thiscall RTKitFirmware::getFileSizeByFileName(RTKitFirmware *this,string *param_1)

{
  long *plVar1;
  undefined8 uVar2;
  string *psVar3;
  undefined1 auVar4 [16];
  
  psVar3 = *(string **)(this + 0x20);
  if (psVar3 != (string *)0x0) {
    auVar4 = ___dynamic_cast(psVar3,&ACFUFile::typeinfo,&ACFUFTABFile::typeinfo,0);
    plVar1 = auVar4._0_8_;
    if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0021ddfb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)(*plVar1 + 0x20))(plVar1,param_1,auVar4._8_8_,*(code **)(*plVar1 + 0x20));
      return uVar2;
    }
  }
  getFileSizeByFileName(psVar3);
  return 0;
}


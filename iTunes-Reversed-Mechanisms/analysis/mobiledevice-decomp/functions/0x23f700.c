// rea decompile_all
// name: UARPAssetVersionBackDeploy::initWithMajorVersion:minorVersion:releaseVersion:buildVersion:
// address: 0x23f700
// body: available
// range: 0x23f700-0x23f75d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x30 bytes */

ID UARPAssetVersionBackDeploy::initWithMajorVersion_minorVersion_releaseVersion_buildVersion_
             (ID param_1,SEL param_2,unsigned_long_long param_3,unsigned_long_long param_4,
             unsigned_long_long param_5,unsigned_long_long param_6)

{
  ID IVar1;
  objc_super local_38;
  
  local_38.super_class = &objc::class_t::UARPAssetVersionBackDeploy;
  local_38.receiver = param_1;
  IVar1 = _objc_msgSendSuper2(&local_38,"init");
  if (IVar1 != 0) {
    *(unsigned_long_long *)(IVar1 + 8) = param_3;
    *(unsigned_long_long *)(IVar1 + 0x10) = param_4;
    *(unsigned_long_long *)(IVar1 + 0x18) = param_5;
    *(unsigned_long_long *)(IVar1 + 0x20) = param_6;
  }
  return IVar1;
}


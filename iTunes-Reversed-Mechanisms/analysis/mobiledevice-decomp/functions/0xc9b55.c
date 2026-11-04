// rea decompile_all
// name: _RCCreateSizeCalculationDescriptionString
// address: 0xc9b55
// body: available
// range: 0xc9b55-0xc9bcf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _RCCreateSizeCalculationDescriptionString
               (undefined8 param_1,undefined8 param_2,long param_3,long param_4,long param_5,
               long param_6,long param_7,long param_8,undefined8 param_9)

{
  long lVar1;
  
  lVar1 = param_5 + param_6 + param_4 + param_3 + param_7;
  _CFStringCreateWithFormat
            (*(undefined8 *)PTR__kCFAllocatorDefault_004410e8,0,
             &
             cf_There_snotenoughroomtoresizethesystempartition_Need_llumoreMB_Firmware__6lluMB_____________________________________SystemPartition__6lluMB__lluMBforthesystemimage__lluMBforthesystempadding__lluMBforthefirmware__lluMBforacushionRequiredDiskSpace___6lliMB_canbenegativeduetosystempartitionpadding___________________________________TotalRequiredsize__6lluMBAvailableSpace___6lluMB__________________________________SpaceNeeded__6lluMB
             ,param_1,param_3,param_9,param_2,param_4,param_5,param_3,param_6,param_7,lVar1,param_8,
             lVar1 - param_8);
  return;
}


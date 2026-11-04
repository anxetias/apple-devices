// rea decompile_all
// name: _AMAuthInstallMonetPrintHashTableHeader
// address: 0x1ac90e
// body: available
// range: 0x1ac90e-0x1accbd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _AMAuthInstallMonetPrintHashTableHeader(long param_1)

{
  _AMAuthInstallLog(7,"AMAuthInstallMonetPrintHashTableHeader","version: 0x%X",
                    *(undefined4 *)(param_1 + 4));
  _AMAuthInstallLog(7,"AMAuthInstallMonetPrintHashTableHeader","qc_signature_size: 0x%X",
                    *(undefined4 *)(param_1 + 8));
  _AMAuthInstallLog(7,"AMAuthInstallMonetPrintHashTableHeader","qc_cert_chain_size: 0x%X",
                    *(undefined4 *)(param_1 + 0xc));
  _AMAuthInstallLog(7,"AMAuthInstallMonetPrintHashTableHeader","image_size: 0x%X",
                    *(undefined4 *)(param_1 + 0x10));
  _AMAuthInstallLog(7,"AMAuthInstallMonetPrintHashTableHeader","code_size: 0x%X",
                    *(undefined4 *)(param_1 + 0x14));
  _AMAuthInstallLog(7,"AMAuthInstallMonetPrintHashTableHeader","OEM_CERT_CHAIN_SIZE: 0x%X",
                    *(undefined4 *)(param_1 + 0x24));
  _AMAuthInstallLog(7,"AMAuthInstallMonetPrintHashTableHeader","OEM_SIGN_CHAIN_SIZE: 0x%X",
                    *(undefined4 *)(param_1 + 0x1c));
  _AMAuthInstallLog(7,"AMAuthInstallMonetPrintHashTableHeader","metadata_size_qc: 0x%X",
                    *(undefined4 *)(param_1 + 0x28));
  _AMAuthInstallLog(7,"AMAuthInstallMonetPrintHashTableHeader","metadata_size_oem: 0x%X",
                    *(undefined4 *)(param_1 + 0x2c));
  _AMAuthInstallLog(7,"AMAuthInstallMonetPrintHashTableHeader","metadata_field_version_major: 0x%X",
                    *(undefined4 *)(param_1 + 0x30));
  _AMAuthInstallLog(7,"AMAuthInstallMonetPrintHashTableHeader","metadata_field_version_minor: 0x%X",
                    *(undefined4 *)(param_1 + 0x34));
  _AMAuthInstallLog(7,"AMAuthInstallMonetPrintHashTableHeader","MetaData:sw_id: 0x%X",
                    *(undefined4 *)(param_1 + 0x38));
  _AMAuthInstallLog(7,"AMAuthInstallMonetPrintHashTableHeader","MetaData:jtag_id 0x%X",
                    *(undefined4 *)(param_1 + 0x3c));
  _AMAuthInstallLog(7,"AMAuthInstallMonetPrintHashTableHeader","MetaData:oem_id 0x%X",
                    *(undefined4 *)(param_1 + 0x40));
  _AMAuthInstallLog(7,"AMAuthInstallMonetPrintHashTableHeader","MetaData:model_id 0x%X",
                    *(undefined4 *)(param_1 + 0x44));
  _AMAuthInstallLog(7,"AMAuthInstallMonetPrintHashTableHeader","MetaData:app_id 0x%X",
                    *(undefined4 *)(param_1 + 0x48));
  _AMAuthInstallLog(7,"AMAuthInstallMonetPrintHashTableHeader","MetaData:root_cert_sel 0x%X",
                    *(undefined4 *)(param_1 + 0xa0));
  _AMAuthInstallLog(7,"AMAuthInstallMonetPrintHashTableHeader","MetaData:anti_rollback_version 0x%X"
                    ,*(undefined4 *)(param_1 + 0xa4));
  _AMAuthInstallLog(7,"AMAuthInstallMonetPrintHashTableHeader",
                    "MetaData:flags MAV20_METADATA_FLAG_ROT_FIELD_MASK 0x%X",
                    *(uint *)(param_1 + 0x4c) & 1);
  _AMAuthInstallLog(7,"AMAuthInstallMonetPrintHashTableHeader",
                    "MetaData:flags FLAG_USE_HW_VERS_FIELD 0x%X",*(uint *)(param_1 + 0x4c) >> 1 & 1)
  ;
  _AMAuthInstallLog(7,"AMAuthInstallMonetPrintHashTableHeader",
                    "MetaData:flags USE_SNUM_IN_SIGN 0x%X",*(uint *)(param_1 + 0x4c) >> 2 & 1);
  _AMAuthInstallLog(7,"AMAuthInstallMonetPrintHashTableHeader",
                    "MetaData:flags OEM_ID_INDEPENDENT 0x%X",*(uint *)(param_1 + 0x4c) >> 3 & 1);
  _AMAuthInstallLog(7,"AMAuthInstallMonetPrintHashTableHeader","MetaData:flags REVOCATION 0x%X",
                    *(uint *)(param_1 + 0x4c) >> 4 & 3);
  _AMAuthInstallLog(7,"AMAuthInstallMonetPrintHashTableHeader","MetaData:flags UIE_KEY 0x%X",
                    *(uint *)(param_1 + 0x4c) >> 6 & 3);
  _AMAuthInstallLog(7,"AMAuthInstallMonetPrintHashTableHeader","MetaData:flags DEBUG_FIELD 0x%X",
                    *(uint *)(param_1 + 0x4c) >> 8 & 3);
  _AMAuthInstallLog(7,"AMAuthInstallMonetPrintHashTableHeader",
                    "MetaData:Serial Nums 0x%X 0x%X 0x%X 0x%X 0x%X 0x%X 0x%X 0x%X",
                    *(undefined4 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x84),
                    *(undefined4 *)(param_1 + 0x88),*(undefined4 *)(param_1 + 0x8c),
                    *(undefined4 *)(param_1 + 0x90),*(undefined4 *)(param_1 + 0x94),
                    *(undefined4 *)(param_1 + 0x98),*(undefined4 *)(param_1 + 0x9c));
  _AMAuthInstallLog(7,"AMAuthInstallMonetPrintHashTableHeader",
                    "MetaData:SOC Vers 0x%X 0x%X 0x%X 0x%X 0x%X 0x%X 0x%X 0x%X 0x%X 0x%X 0x%X 0x%X",
                    *(undefined4 *)(param_1 + 0x50),*(undefined4 *)(param_1 + 0x54),
                    *(undefined4 *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x5c),
                    *(undefined4 *)(param_1 + 0x60),*(undefined4 *)(param_1 + 100),
                    *(undefined4 *)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x6c),
                    *(undefined4 *)(param_1 + 0x70),*(undefined4 *)(param_1 + 0x74),
                    *(undefined4 *)(param_1 + 0x78),*(undefined4 *)(param_1 + 0x7c));
  return 0;
}


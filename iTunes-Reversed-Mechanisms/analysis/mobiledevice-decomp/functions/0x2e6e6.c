// rea decompile_all
// name: _write_config
// address: 0x2e6e6
// body: available
// range: 0x2e6e6-0x2e880 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int _write_config(undefined8 param_1,undefined1 *param_2,undefined4 *param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  __os_log_internal(0,PTR___os_log_default_004412f0,1,
                    "Write config start portal: %d seq: 0x%x index: 0x%x words: %d",*param_2,
                    *(undefined2 *)(param_2 + 2),*(undefined2 *)(param_2 + 4),
                    *(undefined2 *)(param_2 + 6));
  iVar1 = _serialize_pcw(param_2,param_3);
  iVar3 = -0x1ffffd44;
  iVar2 = iVar3;
  if ((((iVar1 == 0) && (iVar2 = _debug_usb_write(param_1,*param_2,param_3,param_4), iVar2 == 0)) &&
      (iVar2 = _debug_usb_read(param_1,*param_2,param_3), iVar2 == 0)) &&
     (iVar2 = iVar3, 0x13 < param_4)) {
    __os_log_internal(0,PTR___os_log_default_004412f0,2,
                      "Write config response 0x%x 0x%x 0x%x 0x%x 0x%x",*param_3,param_3[1],
                      param_3[2],param_3[3],param_3[4]);
    if ((uint)*(ushort *)(param_2 + 6) * 4 <= (uint)param_3[3]) {
      __os_log_internal(0,PTR___os_log_default_004412f0,1,
                        "Write config end portal: %d seq: 0x%x index: 0x%x words: %d",*param_2,
                        *(undefined2 *)(param_2 + 2),*(undefined2 *)(param_2 + 4),
                        *(ushort *)(param_2 + 6));
      return 0;
    }
  }
  __os_log_internal(0,PTR___os_log_default_004412f0,0x10,
                    "Write config error portal: %d seq: 0x%x index: 0x%x words: %d",*param_2,
                    *(undefined2 *)(param_2 + 2),*(undefined2 *)(param_2 + 4),
                    *(undefined2 *)(param_2 + 6));
  return iVar2;
}


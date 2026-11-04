// rea decompile_all
// name: _read_config
// address: 0x2e197
// body: available
// range: 0x2e197-0x2e354 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int _read_config(undefined8 param_1,undefined1 *param_2,undefined4 *param_3,uint *param_4)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  int local_34;
  
  __os_log_internal(0,PTR___os_log_default_004412f0,1,
                    "Read config start portal: %d seq: 0x%x index: 0x%x words: %d",*param_2,
                    *(undefined2 *)(param_2 + 2),*(undefined2 *)(param_2 + 4),
                    *(undefined2 *)(param_2 + 6));
  uVar1 = *param_4;
  iVar2 = _serialize_pcr(param_2,param_3);
  if (iVar2 == 0) {
    local_34 = _debug_usb_write(param_1,*param_2,param_3,uVar1);
    if ((local_34 == 0) &&
       (local_34 = _debug_usb_read(param_1,*param_2,param_3,param_4), local_34 == 0)) {
      local_34 = -0x1ffffd44;
      if ((uint)*(ushort *)(param_2 + 6) * 4 + 0x14 <= *param_4) {
        uVar3 = (ulong)(*param_4 & 0xfffffffc);
        __os_log_internal(0,PTR___os_log_default_004412f0,2,
                          "Read config 0x%x 0x%x 0x%x ... 0x%x 0x%x",*param_3,param_3[1],param_3[2],
                          *(undefined4 *)((long)param_3 + (uVar3 - 8)),
                          *(undefined4 *)((long)param_3 + (uVar3 - 4)));
        if ((uint)*(ushort *)(param_2 + 6) * 4 <= (uint)param_3[(*param_4 >> 2) - 2]) {
          __os_log_internal(0,PTR___os_log_default_004412f0,1,
                            "Read config end portal: %d seq: 0x%x index: 0x%x words: %d",*param_2,
                            *(undefined2 *)(param_2 + 2),*(undefined2 *)(param_2 + 4),
                            *(ushort *)(param_2 + 6));
          return 0;
        }
      }
    }
  }
  else {
    local_34 = -0x1ffffd44;
  }
  __os_log_internal(0,PTR___os_log_default_004412f0,0x10,
                    "Read config error portal: %d seq: 0x%x index: 0x%x words: %d",*param_2,
                    *(undefined2 *)(param_2 + 2),*(undefined2 *)(param_2 + 4),
                    *(undefined2 *)(param_2 + 6));
  return local_34;
}


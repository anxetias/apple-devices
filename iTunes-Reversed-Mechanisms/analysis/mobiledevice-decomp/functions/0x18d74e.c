// rea decompile_all
// name: _pc_log_error
// address: 0x18d74e
// body: available
// range: 0x18d74e-0x18d8c0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x18d8bc to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _pc_log_error(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,uint param_11,int param_12,uint param_13,
                  char *param_14)

{
  char in_AL;
  char cVar1;
  char *pcVar2;
  size_t sVar3;
  uint uVar4;
  undefined1 local_508 [48];
  undefined8 local_4d8;
  undefined8 local_4c8;
  undefined8 local_4b8;
  undefined8 local_4a8;
  undefined8 local_498;
  undefined8 local_488;
  undefined8 local_478;
  undefined8 local_468;
  undefined8 local_458;
  undefined1 *local_450;
  undefined1 *local_448;
  char local_438 [1024];
  long local_38;
  
  if (in_AL != '\0') {
    local_4d8 = param_1;
    local_4c8 = param_2;
    local_4b8 = param_3;
    local_4a8 = param_4;
    local_498 = param_5;
    local_488 = param_6;
    local_478 = param_7;
    local_468 = param_8;
  }
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  ___bzero(local_438,0x400);
  if (0 < (int)param_13) {
    pcVar2 = _strerror(param_13);
    _snprintf(local_438,0x400,"%s: ",pcVar2);
  }
  uVar4 = param_13 & 0x3ff | (param_11 & 0x3fff) << 10 | param_12 << 0x18 | 0x80000000;
  sVar3 = _strlen(local_438);
  local_448 = local_508;
  local_450 = &stack0x00000008;
  local_458 = 0x3000000030;
  _vsnprintf(local_438 + sVar3,0x400 - sVar3,param_14,&local_458);
  cVar1 = _os_log_type_enabled(PTR___os_log_default_004412f0,0x10);
  if (cVar1 != '\0') {
    _pc_log_error_cold_1(local_438,uVar4);
  }
  _ParallelCompressionUpdateError(uVar4,local_438);
  if (*(long *)PTR____stack_chk_guard_004412b8 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}


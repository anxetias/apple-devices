// rea decompile_all
// name: _read_next_manifest_command
// address: 0xad5b5
// body: available
// range: 0xad5b5-0xad7d7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0xad7d3 to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _read_next_manifest_command(long *param_1,byte *param_2,long *param_3)

{
  char cVar1;
  longlong lVar2;
  long lVar3;
  byte bVar4;
  undefined8 uVar5;
  char local_58 [40];
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_004412b8;
  lVar3 = param_1[2];
  if (param_1[1] <= lVar3) {
    _read_next_manifest_command_cold_1();
    goto LAB_000ad7d3;
  }
  if (lVar3 + 1 < param_1[1]) {
    bVar4 = *(byte *)(*param_1 + lVar3);
    *param_2 = bVar4;
    param_1[2] = param_1[2] + 1;
    if (((0x33 < bVar4 - 0x2b) || ((0x8000000040005U >> ((ulong)(bVar4 - 0x2b) & 0x3f) & 1) == 0))
       && (bVar4 != 0x78)) {
      uVar5 = 0x202;
      goto LAB_000ad763;
    }
    cVar1 = _read_string_to_terminator(param_1,1,param_2 + 1,0x400);
    bVar4 = *param_2;
    if (cVar1 == '\0') {
      uVar5 = 0x208;
      goto LAB_000ad763;
    }
    if (bVar4 == 0x3d) {
      local_58[0x10] = 0;
      local_58[0x11] = '\0';
      local_58[0x12] = '\0';
      local_58[0x13] = '\0';
      local_58[0x14] = '\0';
      local_58[0x15] = '\0';
      local_58[0x16] = '\0';
      local_58[0x17] = '\0';
      local_58[0x18] = '\0';
      local_58[0] = '\0';
      local_58[1] = '\0';
      local_58[2] = '\0';
      local_58[3] = '\0';
      local_58[4] = '\0';
      local_58[5] = '\0';
      local_58[6] = '\0';
      local_58[7] = '\0';
      local_58[8] = 0;
      local_58[9] = '\0';
      local_58[10] = '\0';
      local_58[0xb] = '\0';
      local_58[0xc] = '\0';
      local_58[0xd] = '\0';
      local_58[0xe] = '\0';
      local_58[0xf] = '\0';
      cVar1 = _read_string_to_terminator(param_1,1,local_58,0x19);
      if (cVar1 == '\0') {
        uVar5 = 0x210;
        goto LAB_000ad763;
      }
      lVar2 = _strtoll(local_58,(char **)0x0,10);
      *(longlong *)(param_2 + 0x408) = lVar2;
      if (lVar2 != 0) {
        bVar4 = *param_2;
        goto LAB_000ad69e;
      }
      lVar3 = __CreateAndLogDMError("read_next_manifest_command",0x217);
      goto LAB_000ad76c;
    }
LAB_000ad69e:
    uVar5 = 1;
    if ((bVar4 == 0x78) && (((param_2[1] != 0x45 || (param_2[2] != 0x4f)) || (param_2[3] != 0x46))))
    {
      uVar5 = 0x21e;
      goto LAB_000ad763;
    }
  }
  else {
    _dmlog("read_bytes",0x6c,&cf_Expectedtoread_ldbytesbutstreamdidn_thavethatmany,1);
    uVar5 = 0x1fc;
LAB_000ad763:
    lVar3 = __CreateAndLogDMError("read_next_manifest_command",uVar5);
LAB_000ad76c:
    if (param_3 == (long *)0x0) {
      if (lVar3 != 0) {
        _CFRelease(lVar3);
      }
    }
    else {
      *param_3 = lVar3;
    }
    uVar5 = 0;
  }
  if (*(long *)PTR____stack_chk_guard_004412b8 == local_30) {
    return uVar5;
  }
LAB_000ad7d3:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}


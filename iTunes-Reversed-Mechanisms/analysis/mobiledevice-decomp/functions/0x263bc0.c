// rea decompile_all
// name: _ccrsa_emsa_pkcs1v15_encode_internal
// address: 0x263bc0
// body: available
// range: 0x263bc0-0x263cdf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
_ccrsa_emsa_pkcs1v15_encode_internal
          (ulong param_1,undefined2 *param_2,ulong param_3,void *param_4,void *param_5)

{
  undefined8 uVar1;
  ulong uVar2;
  byte bVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  
  uVar1 = 0xfffffffffffffff9;
  if (param_5 == (void *)0x0) {
    bVar3 = 0;
    uVar2 = param_3;
  }
  else {
    if (0xff < param_3) {
      return 0xfffffffffffffff9;
    }
    bVar3 = *(byte *)((long)param_5 + 1);
    if (0xfb < bVar3) {
      return 0xfffffffffffffff9;
    }
    if (0x7c < param_3 + bVar3 + 8) {
      return 0xfffffffffffffff9;
    }
    uVar2 = param_3 + bVar3 + 10;
  }
  if ((10 < param_1) && (uVar2 <= param_1 - 0xb)) {
    *param_2 = 0x100;
    _memset(param_2 + 1,0xff,(param_1 - uVar2) - 3);
    puVar4 = (undefined1 *)((long)param_2 + (param_1 - uVar2));
    puVar5 = puVar4 + -1;
    *puVar5 = 0;
    if (param_5 != (void *)0x0) {
      *puVar4 = 0x30;
      puVar4[1] = (char)uVar2 + -2;
      puVar4[2] = 0x30;
      uVar2 = (ulong)bVar3;
      puVar4[3] = bVar3 + 4;
      _memcpy(puVar4 + 4,param_5,uVar2 + 2);
      puVar4 = puVar5 + uVar2 + 0xb;
      *(undefined2 *)(puVar5 + uVar2 + 7) = 5;
      puVar5[uVar2 + 9] = 4;
      puVar5[uVar2 + 10] = (char)param_3;
    }
    _memcpy(puVar4,param_4,param_3);
    uVar1 = 0;
  }
  return uVar1;
}


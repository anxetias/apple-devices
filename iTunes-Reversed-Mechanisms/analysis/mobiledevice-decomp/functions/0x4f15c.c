// rea decompile_all
// name: _BrotliEncoderCreateInstance
// address: 0x4f15c
// body: available
// range: 0x4f15c-0x4f2a8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * _BrotliEncoderCreateInstance(code *param_1,long param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  if (param_1 == (code *)0x0 && param_2 == 0) {
    puVar1 = _malloc(0x21c0);
  }
  else {
    if (param_1 == (code *)0x0 || param_2 == 0) {
      return (undefined8 *)0x0;
    }
    puVar1 = (undefined8 *)(*param_1)(param_3,0x21c0);
  }
  if (puVar1 == (undefined8 *)0x0) {
    return (undefined8 *)0x0;
  }
  _BrotliInitMemoryManager(puVar1 + 0x12,param_1,param_2,param_3);
  *puVar1 = 0xb00000000;
  *(undefined4 *)((long)puVar1 + 0x24) = 0;
  *(undefined4 *)(puVar1 + 1) = 0x16;
  *(undefined8 *)((long)puVar1 + 0xc) = 0;
  *(undefined8 *)((long)puVar1 + 0x14) = 0;
  *(undefined8 *)((long)puVar1 + 0x1c) = 0;
  _BrotliInitEncoderDictionary(puVar1 + 0xb);
  puVar1[8] = 0;
  puVar1[9] = 0x4000000040;
  puVar1[10] = 0x3fffffc;
  puVar1[0x119] = 0;
  *(undefined2 *)((long)puVar1 + 0x984) = 0;
  *(undefined8 *)((long)puVar1 + 0x21b4) = 0;
  *(undefined4 *)((long)puVar1 + 0x21bc) = 0;
  puVar1[0x11c] = 0;
  puVar1[0x11d] = 0;
  puVar1[0x11e] = 0;
  puVar1[0x11f] = 0;
  puVar1[0x120] = 0;
  puVar1[0x121] = 0;
  puVar1[0x122] = 0;
  puVar1[0x123] = 0;
  puVar1[0x124] = 0;
  puVar1[0x125] = 0;
  puVar1[0x131] = 0;
  puVar1[0x132] = 0;
  puVar1[0x133] = 0;
  puVar1[0x3bc] = 0;
  puVar1[0x3bd] = 0;
  puVar1[0x42e] = 0;
  puVar1[0x42f] = 0;
  puVar1[0x430] = 0;
  puVar1[0x431] = 0;
  puVar1[0x432] = 0;
  puVar1[0x433] = 0;
  puVar1[0x126] = 0xb00000004;
  puVar1[0x127] = 0x100000000f;
  puVar1[0x12e] = puVar1[0x126];
  puVar1[0x12f] = puVar1[0x127];
  return puVar1;
}


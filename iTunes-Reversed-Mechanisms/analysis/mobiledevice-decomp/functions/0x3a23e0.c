// rea decompile_all
// name: lzma_copy_with_pattern
// address: 0x3a23e0
// body: available
// range: 0x3a23e0-0x3a23e0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Control flow encountered bad instruction data */
/* lzma_copy_with_pattern(unsigned char*, unsigned int, unsigned int) [clone .repeat_off] */

void lzma_copy_with_pattern(uchar *param_1,uint param_2,uint param_3)

{
  int *piVar1;
  int in_EAX;
  undefined4 in_register_00000004;
  undefined4 in_register_00000014;
  
  *(char *)CONCAT44(in_register_00000004,in_EAX) =
       *(char *)CONCAT44(in_register_00000004,in_EAX) + (char)in_EAX;
  *(int *)CONCAT44(in_register_00000004,in_EAX) =
       *(int *)CONCAT44(in_register_00000004,in_EAX) + in_EAX;
  piVar1 = (int *)(CONCAT44(in_register_00000014,param_3) + CONCAT44(in_register_00000004,in_EAX));
  *piVar1 = *piVar1 + in_EAX;
  *param_1 = *param_1 + (char)in_EAX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


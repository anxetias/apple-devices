// rea decompile_all
// name: std::__pad_and_output[abi:ne190102]<char,std::char_traits<char>>
// address: 0x220d40
// body: available
// range: 0x220d40-0x220e30 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* std::ostreambuf_iterator<char, std::char_traits<char> > std::__pad_and_output[abi:ne190102]<char,
   std::char_traits<char> >(std::ostreambuf_iterator<char, std::char_traits<char> >, char const*,
   char const*, char const*, std::ios_base&, char) */

long * std::__pad_and_output_abi_ne190102_<char,std::char_traits<char>>
                 (long *param_1,long param_2,long param_3,long param_4,long param_5,char param_6)

{
  long lVar1;
  ulong uVar2;
  undefined1 *puVar3;
  long lVar4;
  ulong uVar5;
  string local_48;
  undefined1 local_47 [15];
  undefined1 *local_38;
  
  if (param_1 != (long *)0x0) {
    uVar2 = *(long *)(param_5 + 0x18) - (param_4 - param_2);
    uVar5 = 0;
    if (uVar2 != 0 && param_4 - param_2 <= *(long *)(param_5 + 0x18)) {
      uVar5 = uVar2;
    }
    lVar4 = param_3 - param_2;
    if ((lVar4 < 1) ||
       (lVar1 = (**(code **)(*param_1 + 0x60))(param_1,param_2,lVar4), lVar1 == lVar4)) {
      if (0 < (long)uVar5) {
        string::string_abi_ne190102_(&local_48,uVar5,param_6);
        puVar3 = local_38;
        if (((byte)local_48 & 1) == 0) {
          puVar3 = local_47;
        }
        uVar2 = (**(code **)(*param_1 + 0x60))(param_1,puVar3,uVar5);
        if (((byte)local_48 & 1) != 0) {
          operator_delete(local_38);
        }
        if (uVar2 != uVar5) {
          return (long *)0x0;
        }
      }
      param_4 = param_4 - param_3;
      if ((param_4 < 1) ||
         (lVar4 = (**(code **)(*param_1 + 0x60))(param_1,param_3,param_4), lVar4 == param_4)) {
        *(undefined8 *)(param_5 + 0x18) = 0;
        return param_1;
      }
    }
  }
  return (long *)0x0;
}


// rea decompile_all
// name: std::__put_character_sequence[abi:ne190102]<char,std::char_traits<char>>
// address: 0x220bf0
// body: available
// range: 0x220bf0-0x220ce8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::ostream& std::__put_character_sequence[abi:ne190102]<char, std::char_traits<char>
   >(std::ostream&, char const*, unsigned long) */

ostream * std::__put_character_sequence_abi_ne190102_<char,std::char_traits<char>>
                    (ostream *param_1,char *param_2,ulong param_3)

{
  uint uVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  char *pcVar5;
  undefined8 uVar6;
  sentry local_58 [16];
  undefined8 local_48;
  id local_40 [15];
  char local_31;
  
  std::ostream::sentry::sentry(local_58,param_1);
  if (local_58[0] == (sentry)0x1) {
    lVar4 = *(long *)(*(long *)param_1 + -0x18);
    uVar1 = *(uint *)(param_1 + lVar4 + 8);
    iVar2 = *(int *)(param_1 + lVar4 + 0x90);
    uVar6 = *(undefined8 *)(param_1 + lVar4 + 0x28);
    if (iVar2 == -1) {
      local_48 = *(undefined8 *)(param_1 + lVar4 + 0x28);
      std::ios_base::getloc();
      plVar3 = (long *)std::locale::use_facet(local_40);
      local_31 = (**(code **)(*plVar3 + 0x38))(plVar3,0x20);
      std::locale::~locale((locale *)local_40);
      iVar2 = (int)local_31;
      *(int *)(param_1 + lVar4 + 0x90) = iVar2;
      uVar6 = local_48;
    }
    pcVar5 = param_2;
    if ((uVar1 & 0xb0) == 0x20) {
      pcVar5 = param_2 + param_3;
    }
    lVar4 = __pad_and_output_abi_ne190102_<char,std::char_traits<char>>
                      (uVar6,param_2,pcVar5,param_2 + param_3,param_1 + lVar4,(int)(char)iVar2);
    if (lVar4 == 0) {
      std::ios_base::clear((int)param_1 + (int)*(undefined8 *)(*(long *)param_1 + -0x18));
    }
  }
  std::ostream::sentry::~sentry(local_58);
  return param_1;
}


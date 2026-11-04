// rea decompile_all
// name: __AMRRegexSubstitution
// address: 0xf4632
// body: available
// range: 0xf4632-0xf477e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 __AMRRegexSubstitution(long param_1,undefined8 param_2,char *param_3,code *param_4)

{
  char *pcVar1;
  long lVar2;
  int iVar3;
  size_t sVar4;
  size_t sVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  long local_68;
  code *local_60;
  long local_58;
  long lStack_50;
  undefined8 local_40;
  int local_34;
  
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_40 = param_2;
  iVar3 = _regcomp(&local_88,param_2,3);
  if (iVar3 == 0) {
    local_58 = 0;
    lStack_50 = 0;
    local_60 = param_4;
    do {
      local_34 = _regexec(&local_88,param_1,1,&local_58,0);
      lVar2 = local_58;
      if (local_34 != 0) {
        if (local_34 == 1) {
          uVar6 = 0;
          goto LAB_000f4764;
        }
        break;
      }
      local_68 = lStack_50;
      uVar7 = lStack_50 - local_58;
      sVar4 = _strlen(param_3);
      uVar8 = uVar7;
      if (sVar4 < uVar7) {
        uVar8 = sVar4;
      }
      _memcpy((void *)(lVar2 + param_1),param_3,uVar8);
      if (0 < (long)-(sVar4 - uVar7)) {
        sVar5 = _strlen(param_3);
        _memset((void *)(lVar2 + param_1 + uVar8),(uint)(byte)param_3[sVar5 - 1],-(sVar4 - uVar7));
      }
      pcVar1 = (char *)(param_1 + local_68);
      param_1 = param_1 + local_68;
    } while (*pcVar1 != '\0');
    uVar6 = 0xffffffff;
    if (local_60 != (code *)0x0) {
      (*local_60)(3,&cf_regexmatchingfailedfor__s___d,local_40,local_34);
    }
LAB_000f4764:
    _regfree(&local_88);
  }
  else {
    uVar6 = 0xffffffff;
    if (param_4 != (code *)0x0) {
      (*param_4)(3,&cf_unabletocompileregex__s___d,local_40,iVar3);
    }
  }
  return uVar6;
}


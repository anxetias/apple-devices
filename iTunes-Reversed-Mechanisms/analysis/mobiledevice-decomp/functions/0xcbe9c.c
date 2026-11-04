// rea decompile_all
// name: __AMRestoreScrubLogBuffer
// address: 0xcbe9c
// body: available
// range: 0xcbe9c-0xcc353 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0xcc34f to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong __AMRestoreScrubLogBuffer(long param_1,char *param_2,undefined8 param_3,code *param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  long lVar20;
  long lVar21;
  char *pcVar22;
  size_t sVar23;
  code *pcVar24;
  ulong uVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  char *local_78;
  char *pcStack_70;
  undefined8 local_68;
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_004412b8;
  local_68 = 0;
  local_78 = "UniqueBuildID";
  pcStack_70 = "UUID";
  if (param_2 == (char *)0x0) {
    uVar25 = CONCAT71((int7)((ulong)param_4 >> 8),1);
    goto LAB_000cc32b;
  }
  local_48 = (undefined1  [16])0x0;
  local_58 = (undefined1  [16])0x0;
  pcVar24 = param_4;
  lVar20 = _CFStringCreateWithCString
                     (*(undefined8 *)PTR__kCFAllocatorDefault_004410e8,param_2,0x8000100);
  if (lVar20 == 0) {
LAB_000cbf32:
    if ((param_1 != 0) && (lVar21 = _CFStringGetLength(param_1), 0 < lVar21)) {
      cVar1 = _CFStringGetCString(param_1,local_58,0x20,0x8000100);
      if (cVar1 == '\x01') {
        pcVar22 = _strstr(param_2,local_58);
        if (pcVar22 != (char *)0x0) {
          do {
            sVar23 = _strlen(local_58);
            _memset(pcVar22,0x58,sVar23);
            pcVar22 = _strstr(pcVar22,local_58);
          } while (pcVar22 != (char *)0x0);
        }
      }
      else if (param_4 != (code *)0x0) {
        (*param_4)(3,&cf_unabletogetcstringfordeviceserialnumber);
      }
    }
    iVar2 = __AMRRegexSubstitutionWhitelist
                      (param_2,param_3,"[0-9a-fA-F]{40}","<<<<<<<<<<<<<<<<<<UDID>>>>>>>>>>>>>>>>>>",
                       param_4,&local_78);
    iVar3 = __AMRRegexSubstitutionWhitelist
                      (param_2,param_3,"[0-9a-fA-F]{20}","<<<<<<<<ICCID>>>>>>>",param_4,&local_78);
    uVar4 = __AMRRegexSubstitutionWhitelist
                      (param_2,param_3,"[0-9a-fA-F]{19}","<<<<<<<<ICCID>>>>>>>",param_4,&local_78);
    uVar5 = __AMRRegexSubstitutionWhitelist
                      (param_2,param_3,"[0-9]{15}","<<<<<IMEI>>>>>>",param_4,&local_78);
    uVar6 = __AMRRegexSubstitutionWhitelist
                      (param_2,param_3,"[0-9a-fA-F]{14}","<<<<<MEID>>>>>",param_4,&local_78);
    uVar7 = __AMRRegexSubstitutionWhitelist
                      (param_2,param_3,"\'[^\n]*\' has been added",
                       "\'<<File name>>\' has been added.",param_4,&local_78);
    uVar8 = __AMRRegexSubstitutionWhitelist
                      (param_2,param_3,
                       "verify_callback: \'[^\n]*\' did not verify and is not on the exception list."
                       ,
                       "verify_callback: \'<<File name>>\' did not verify and is not on the exception list."
                       ,param_4,&local_78);
    uVar9 = __AMRRegexSubstitutionWhitelist
                      (param_2,param_3,"verify_callback: \'[^\n]*\' is on the exception list",
                       "verify_callback: \'<<File name>>\' is on the exception list.",param_4,
                       &local_78);
    uVar10 = __AMRRegexSubstitutionWhitelist
                       (param_2,param_3,"\"ChipSerialNo\"[^\n]*bytes = 0x[0-9a-fA-F]*}",
                        "\"ChipSerialNo\" X",param_4,&local_78);
    uVar11 = __AMRRegexSubstitutionWhitelist
                       (param_2,param_3,"ecid=0x[0-9a-fA-F]*,","ecid=0xXXXXXXXXXXX",param_4,
                        &local_78);
    uVar12 = __AMRRegexSubstitutionWhitelist
                       (param_2,param_3,"\"ApECID\"[^\n]*value = [+-][0-9<>IMEI]*",
                        "\"ApECID\"} = X {X",param_4,&local_78);
    uVar13 = __AMRRegexSubstitutionWhitelist
                       (param_2,param_3,"snum=0x[0-9a-fA-F]*,","snum=0xXXXXXXXX",param_4,&local_78);
    uVar14 = __AMRRegexSubstitutionWhitelist
                       (param_2,param_3,"([0-9a-fA-F][0-9a-fA-F]:){5}([0-9a-fA-F][0-9a-fA-F])",
                        "<<<mac address>>>",param_4,&local_78);
    uVar15 = __AMRRegexSubstitutionWhitelist
                       (param_2,param_3,"[:-][0-9a-fA-F]{8}","XXXX",param_4,&local_78);
    uVar16 = __AMRRegexSubstitutionWhitelist
                       (param_2,param_3,"[:-][a-zA-Z0-9]{18}[[:>:]]","XXXX",param_4,&local_78);
    uVar17 = __AMRRegexSubstitutionWhitelist
                       (param_2,param_3,"[:-][a-zA-Z0-9]{8}[:-][a-zA-Z0-9]{16}","XXXX",param_4,
                        &local_78);
    uVar18 = __AMRRegexSubstitutionWhitelist
                       (param_2,param_3,"MLBNumber[^\n]* [a-zA-Z0-9]{16}","<<<<<<<<<<MLB>>>>>>>>>>",
                        param_4,&local_78);
    pcVar22 = "<<<<<<<<<SERIAL>>>>>>>>>";
    uVar19 = __AMRRegexSubstitutionWhitelist
                       (param_2,param_3,"SerialNumber[^\n]* [a-zA-Z0-9]{12}",
                        "<<<<<<<<<SERIAL>>>>>>>>>",param_4,&local_78);
    auVar26._4_4_ = uVar18;
    auVar26._0_4_ = uVar19;
    auVar26._12_4_ = uVar16;
    auVar26._8_4_ = uVar17;
    auVar27._4_4_ = uVar14;
    auVar27._0_4_ = uVar15;
    auVar27._12_4_ = uVar12;
    auVar27._8_4_ = uVar13;
    auVar28._4_4_ = uVar10;
    auVar28._0_4_ = uVar11;
    auVar28._12_4_ = uVar8;
    auVar28._8_4_ = uVar9;
    auVar29._4_4_ = uVar6;
    auVar29._0_4_ = uVar7;
    auVar29._12_4_ = uVar4;
    auVar29._8_4_ = uVar5;
    uVar25 = CONCAT71((int7)((ulong)pcVar22 >> 8),
                      (iVar3 == 0 && iVar2 == 0) &&
                      ((auVar29 == (undefined1  [16])0x0 && auVar27 == (undefined1  [16])0x0) &&
                      (auVar28 == (undefined1  [16])0x0 && auVar26 == (undefined1  [16])0x0)));
    if ((param_4 != (code *)0x0) &&
       ((iVar3 != 0 || iVar2 != 0) ||
        ((auVar29 != (undefined1  [16])0x0 || auVar27 != (undefined1  [16])0x0) ||
        (auVar28 != (undefined1  [16])0x0 || auVar26 != (undefined1  [16])0x0)))) {
      uVar25 = uVar25 & 0xffffffff;
      (*param_4)(3,&cf_Failedtorunregexscrubber);
    }
    if (lVar20 == 0) goto LAB_000cc32b;
  }
  else {
    lVar21 = _CFStringFind(lVar20,&cf_FailureDescription_,0);
    uVar25 = CONCAT71((int7)((ulong)pcVar24 >> 8),1);
    if (lVar21 == -1) goto LAB_000cbf32;
  }
  uVar25 = uVar25 & 0xffffffff;
  _CFRelease(lVar20);
LAB_000cc32b:
  if (*(long *)PTR____stack_chk_guard_004412b8 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar25 & 0xffffffff;
}


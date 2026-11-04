// rea decompile_all
// name: ACFUFirmware::measureFW
// address: 0x21e9e2
// body: available
// range: 0x21e9e2-0x21ec8f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* ACFUFirmware::measureFW() */

undefined8 __thiscall ACFUFirmware::measureFW(ACFUFirmware *this)

{
  ACFUFirmware *pAVar1;
  int iVar2;
  __CFData *p_Var3;
  long lVar4;
  undefined8 uVar5;
  ACFUFirmware *pAVar6;
  char *pcVar7;
  ACFUFirmware *pAVar8;
  bool bVar9;
  uint local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  void *local_78;
  ulong local_68;
  ulong uStack_60;
  char *local_58;
  undefined8 local_48;
  ulong uStack_40;
  char *local_38;
  
  pAVar6 = *(ACFUFirmware **)(this + 8);
  do {
    if (pAVar6 == this + 0x10) {
      return 1;
    }
    if (this[0x50] == (ACFUFirmware)0x1) {
      pAVar1 = pAVar6 + 0x28;
      iVar2 = (**(code **)(*(long *)this + 0x28))(this,pAVar1);
      if (iVar2 == 0) {
        ACFUCommon::stringFromCFString((ACFUCommon *)&local_48,*(__CFString **)(pAVar6 + 0x20));
        if ((local_48 & 1) == 0) {
          if (local_48._0_1_ == (ACFUCommon)0x0) {
LAB_0021eb6b:
            __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8ne190102ILi0EEEPKc
                      (&local_68,"UNDEF");
          }
          else {
            local_58 = local_38;
            local_68 = local_48;
            uStack_60 = uStack_40;
          }
        }
        else {
          if (uStack_40 == 0) goto LAB_0021eb6b;
          std::string::__init_copy_ctor_external((string *)&local_68,local_38,uStack_40);
        }
        if ((local_48 & 1) != 0) {
          operator_delete(local_38);
        }
        local_38 = local_58;
        local_48 = local_68;
        uStack_40 = uStack_60;
        uVar5 = ACFULogging::getLogInstance();
        pcVar7 = (char *)((long)&local_48 + 1);
        if ((local_48 & 1) != 0) {
          pcVar7 = local_38;
        }
        ACFULogging::handleMessage
                  (uVar5,3,"%s::%s: no fw for tag \'%s\'\n","ACFUFirmware","measureFW",pcVar7);
        goto LAB_0021ec39;
      }
      if (((byte)*pAVar1 & 1) == 0) {
        local_78 = *(void **)(pAVar6 + 0x38);
        local_88 = *(uint *)pAVar1;
        uStack_84 = *(undefined4 *)(pAVar6 + 0x2c);
        uStack_80 = *(undefined4 *)(pAVar6 + 0x30);
        uStack_7c = *(undefined4 *)(pAVar6 + 0x34);
      }
      else {
        std::string::__init_copy_ctor_external
                  ((string *)&local_88,*(char **)(pAVar6 + 0x38),*(ulong *)(pAVar6 + 0x30));
      }
      lVar4 = hashData(this,&local_88,iVar2);
      if ((local_88 & 1) != 0) {
        operator_delete(local_78);
      }
LAB_0021eb15:
      if (lVar4 == 0) {
        measureFW();
        return 0;
      }
      _CFDictionarySetValue(*(undefined8 *)(this + 0x28),*(long *)(pAVar6 + 0x20),lVar4);
      _CFRelease(lVar4);
    }
    else {
      p_Var3 = (__CFData *)copyFWDataByTag(this,*(__CFString **)(pAVar6 + 0x20));
      if (p_Var3 != (__CFData *)0x0) {
        lVar4 = hashData(this,p_Var3);
        _CFRelease(p_Var3);
        goto LAB_0021eb15;
      }
      ACFUCommon::stringFromCFString((ACFUCommon *)&local_48,*(__CFString **)(pAVar6 + 0x20));
      if ((local_48 & 1) == 0) {
        if (local_48._0_1_ == (ACFUCommon)0x0) {
LAB_0021ebd3:
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2B8ne190102ILi0EEEPKc
                    (&local_68,"UNDEF");
        }
        else {
          local_58 = local_38;
          local_68 = local_48;
          uStack_60 = uStack_40;
        }
      }
      else {
        if (uStack_40 == 0) goto LAB_0021ebd3;
        std::string::__init_copy_ctor_external((string *)&local_68,local_38,uStack_40);
      }
      if ((local_48 & 1) != 0) {
        operator_delete(local_38);
      }
      local_38 = local_58;
      local_48 = local_68;
      uStack_40 = uStack_60;
      uVar5 = ACFULogging::getLogInstance();
      pcVar7 = (char *)((long)&local_48 + 1);
      if ((local_48 & 1) != 0) {
        pcVar7 = local_38;
      }
      ACFULogging::handleMessage
                (uVar5,3,"%s::%s: no fw for tag \'%s\'\n","ACFUFirmware","measureFW",pcVar7);
LAB_0021ec39:
      if ((local_48 & 1) != 0) {
        operator_delete(local_38);
      }
    }
    pAVar1 = *(ACFUFirmware **)(pAVar6 + 8);
    pAVar8 = pAVar6;
    if (*(ACFUFirmware **)(pAVar6 + 8) == (ACFUFirmware *)0x0) {
      do {
        pAVar6 = *(ACFUFirmware **)(pAVar8 + 0x10);
        bVar9 = *(ACFUFirmware **)pAVar6 != pAVar8;
        pAVar8 = pAVar6;
      } while (bVar9);
    }
    else {
      do {
        pAVar6 = pAVar1;
        pAVar1 = *(ACFUFirmware **)pAVar6;
      } while (*(ACFUFirmware **)pAVar6 != (ACFUFirmware *)0x0);
    }
  } while( true );
}


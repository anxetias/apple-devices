// rea decompile_all
// name: ACFURestoreHost::populateDictFromIdentity
// address: 0x214794
// body: available
// range: 0x214794-0x214922 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* ACFURestoreHost::populateDictFromIdentity(std::vector<__CFString const*,
   std::allocator<__CFString const*> > const&, std::map<__CFString const*, unsigned long,
   std::less<__CFString const*>, std::allocator<std::pair<__CFString const* const, unsigned long> >
   >, __CFDictionary const*, __CFDictionary*) */

undefined8
ACFURestoreHost::populateDictFromIdentity
          (long *param_1,
          map<__CFString_const*,unsigned_long,std::less<__CFString_const*>,std::allocator<std::pair<__CFString_const*const,unsigned_long>>>
          *param_2,undefined8 param_3,undefined8 param_4)

{
  map<__CFString_const*,unsigned_long,std::less<__CFString_const*>,std::allocator<std::pair<__CFString_const*const,unsigned_long>>>
  *pmVar1;
  __CFString *p_Var2;
  map<__CFString_const*,unsigned_long,std::less<__CFString_const*>,std::allocator<std::pair<__CFString_const*const,unsigned_long>>>
  *pmVar3;
  undefined8 uVar4;
  void *pvVar5;
  ulong *puVar6;
  long lVar7;
  map<__CFString_const*,unsigned_long,std::less<__CFString_const*>,std::allocator<std::pair<__CFString_const*const,unsigned_long>>>
  *pmVar8;
  __CFString **pp_Var9;
  undefined1 *puVar10;
  ACFUCommon local_48;
  undefined1 local_47 [15];
  undefined1 *local_38;
  
  pp_Var9 = (__CFString **)*param_1;
  if (pp_Var9 != (__CFString **)param_1[1]) {
    pmVar1 = param_2 + 8;
    do {
      pmVar3 = *(map<__CFString_const*,unsigned_long,std::less<__CFString_const*>,std::allocator<std::pair<__CFString_const*const,unsigned_long>>>
                 **)pmVar1;
      p_Var2 = *pp_Var9;
      pmVar8 = pmVar1;
      if (pmVar3 == (map<__CFString_const*,unsigned_long,std::less<__CFString_const*>,std::allocator<std::pair<__CFString_const*const,unsigned_long>>>
                     *)0x0) {
LAB_002147fe:
        ACFUCommon::stringFromCFString(&local_48,p_Var2);
        uVar4 = ACFULogging::getLogInstance();
        puVar10 = local_47;
        if (((byte)local_48 & 1) != 0) {
          puVar10 = local_38;
        }
        ACFULogging::handleMessage
                  (uVar4,3,"%s::%s: tag \'%s\' not found in tss-request map, ignoring\n",
                   "ACFURestoreHost","populateDictFromIdentity",puVar10);
        if (((byte)local_48 & 1) != 0) {
          operator_delete(local_38);
        }
      }
      else {
        do {
          if (*(__CFString **)(pmVar3 + 0x20) >= p_Var2) {
            pmVar8 = pmVar3;
          }
          pmVar3 = *(map<__CFString_const*,unsigned_long,std::less<__CFString_const*>,std::allocator<std::pair<__CFString_const*const,unsigned_long>>>
                     **)(pmVar3 + (ulong)(*(__CFString **)(pmVar3 + 0x20) < p_Var2) * 8);
        } while (pmVar3 != (map<__CFString_const*,unsigned_long,std::less<__CFString_const*>,std::allocator<std::pair<__CFString_const*const,unsigned_long>>>
                            *)0x0);
        if ((pmVar8 == pmVar1) || (p_Var2 < *(__CFString **)(pmVar8 + 0x20))) goto LAB_002147fe;
        pvVar5 = (void *)_CFDictionaryGetValue(param_3);
        if (pvVar5 == (void *)0x0) {
          ACFUCommon::stringFromCFString(&local_48,*pp_Var9);
          uVar4 = ACFULogging::getLogInstance();
          puVar10 = local_47;
          if (((byte)local_48 & 1) != 0) {
            puVar10 = local_38;
          }
          ACFULogging::handleMessage
                    (uVar4,3,"%s::%s: tag \'%s\' not found in identity dictionary, ignoring\n",
                     "ACFURestoreHost","populateDictFromIdentity",puVar10);
          if (((byte)local_48 & 1) != 0) {
            operator_delete(local_38);
          }
        }
        else {
          puVar6 = (ulong *)std::
                            map<__CFString_const*,unsigned_long,std::less<__CFString_const*>,std::allocator<std::pair<__CFString_const*const,unsigned_long>>>
                            ::at(param_2,pp_Var9);
          lVar7 = convertCFType(pvVar5,*puVar6);
          if (lVar7 == 0) {
            return 0;
          }
          _CFDictionarySetValue(param_4,*pp_Var9,lVar7);
          _CFRelease(lVar7);
        }
      }
      pp_Var9 = pp_Var9 + 1;
    } while (pp_Var9 != (__CFString **)param_1[1]);
  }
  return 1;
}


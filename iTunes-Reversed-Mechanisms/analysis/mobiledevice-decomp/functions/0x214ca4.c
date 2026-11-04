// rea decompile_all
// name: ACFURestoreHost::convertCFType
// address: 0x214ca4
// body: available
// range: 0x214ca4-0x214fbc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* ACFURestoreHost::convertCFType(void const*, unsigned long) */

ulong ACFURestoreHost::convertCFType(void *param_1,ulong param_2)

{
  __CFNumber *p_Var1;
  char cVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined1 *puVar6;
  char *pcVar7;
  ACFURestoreHost *this;
  void *pvVar8;
  ACFUCommon local_60;
  undefined1 local_5f [15];
  undefined1 *local_50;
  undefined8 local_48;
  char local_40;
  void *local_38;
  
  uVar3 = _CFGetTypeID();
  uVar4 = ACFULogging::getLogInstance();
  ACFUCommon::cfTypeDescription((ACFUCommon *)&local_48,param_2,true);
  pvVar8 = local_38;
  p_Var1 = local_48;
  ACFUCommon::cfTypeDescription(&local_60,uVar3,true);
  if (((ulong)p_Var1 & 1) == 0) {
    pvVar8 = (void *)((long)&local_48 + 1);
  }
  puVar6 = local_50;
  if (((byte)local_60 & 1) == 0) {
    puVar6 = local_5f;
  }
  ACFULogging::handleMessage
            (uVar4,4,"%s::%s: desired type %s, received type %s\n","ACFURestoreHost","convertCFType"
             ,pvVar8,puVar6);
  if (((byte)local_60 & 1) != 0) {
    operator_delete(local_50);
  }
  if (((ulong)local_48 & 1) != 0) {
    operator_delete(local_38);
  }
  if (uVar3 == param_2) {
    uVar4 = ACFULogging::getLogInstance();
    ACFULogging::handleMessage
              (uVar4,4,"%s::%s: no conversion necessary\n","ACFURestoreHost","convertCFType");
    uVar3 = _CFRetain(param_1);
    return uVar3;
  }
  uVar5 = _CFNumberGetTypeID();
  if ((uVar5 == param_2) && (uVar5 = _CFStringGetTypeID(), uVar3 == uVar5)) {
    uVar4 = ACFULogging::getLogInstance();
    ACFULogging::handleMessage
              (uVar4,4,"%s::%s: converting from string to number\n","ACFURestoreHost",
               "convertCFType");
    local_48 = (__CFNumber *)0x0;
    cVar2 = createNum32FromString(param_1,(__CFNumber **)&local_48);
    if (cVar2 != '\0') {
      return (ulong)local_48;
    }
    uVar4 = ACFULogging::getLogInstance();
    pcVar7 = "%s::%s: failed to convert from string to number\n";
  }
  else {
    uVar5 = _CFNumberGetTypeID();
    if ((uVar5 != param_2) || (uVar5 = _CFDataGetTypeID(), uVar3 != uVar5)) {
      uVar5 = _CFBooleanGetTypeID();
      if ((uVar5 == param_2) && (uVar5 = _CFDataGetTypeID(), uVar3 == uVar5)) {
        uVar4 = ACFULogging::getLogInstance();
        ACFULogging::handleMessage
                  (uVar4,4,"%s::%s: converting from data to boolean\n","ACFURestoreHost",
                   "convertCFType");
        this = (ACFURestoreHost *)&local_48;
        createBoolFromData(this,param_1);
        if (local_40 == '\x01') {
          convertCFType(this,(ulong)param_1);
          return 0;
        }
        return (ulong)local_48;
      }
      uVar4 = ACFULogging::getLogInstance();
      ACFUCommon::cfTypeDescription((ACFUCommon *)&local_48,param_2,true);
      pvVar8 = local_38;
      p_Var1 = local_48;
      ACFUCommon::cfTypeDescription(&local_60,uVar3,true);
      if (((ulong)p_Var1 & 1) == 0) {
        pvVar8 = (void *)((long)&local_48 + 1);
      }
      puVar6 = local_50;
      if (((byte)local_60 & 1) == 0) {
        puVar6 = local_5f;
      }
      ACFULogging::handleMessage
                (uVar4,2,"%s::%s: unsupported conversion: desired type %s, received type %s\n",
                 "ACFURestoreHost","convertCFType",pvVar8,puVar6);
      if (((byte)local_60 & 1) != 0) {
        operator_delete(local_50);
      }
      if (((ulong)local_48 & 1) == 0) {
        return 0;
      }
      operator_delete(local_38);
      return 0;
    }
    uVar4 = ACFULogging::getLogInstance();
    ACFULogging::handleMessage
              (uVar4,4,"%s::%s: converting from data to number\n","ACFURestoreHost","convertCFType")
    ;
    local_48 = (__CFNumber *)0x0;
    cVar2 = createNum64Num32FromData(param_1,(__CFNumber **)&local_48);
    if (cVar2 != '\0') {
      return (ulong)local_48;
    }
    uVar4 = ACFULogging::getLogInstance();
    pcVar7 = "%s::%s: failed to convert from number to data\n";
  }
  ACFULogging::handleMessage(uVar4,2,pcVar7,"ACFURestoreHost","convertCFType");
  if (local_48 != (__CFNumber *)0x0) {
    _CFRelease();
    return 0;
  }
  return 0;
}


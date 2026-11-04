// rea decompile_all
// name: AMSupportStaticURLSession::_defaultSessionConfigurationWithIdentifier:
// address: 0x736f
// body: available
// range: 0x736f-0x746a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x18 bytes */

ID AMSupportStaticURLSession::_defaultSessionConfigurationWithIdentifier_
             (ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  char cVar2;
  ID self;
  long lVar3;
  undefined8 uVar4;
  
  puVar1 = PTR__objc_msgSend_00441098;
  self = NSURLSessionConfiguration::ephemeralSessionConfiguration
                   ((ID)&_OBJC_CLASS___NSURLSessionConfiguration,"ephemeralSessionConfiguration");
  lVar3 = (*(code *)puVar1)(*(undefined8 *)(param_1 + 0x28),"objectForKey:",&cf_SocksProxySettings);
  if (lVar3 == 0) {
    uVar4 = (*(code *)puVar1)(*(undefined8 *)(param_1 + 0x28),"objectForKey:",
                              &cf_UsePurpleReverseProxy);
    cVar2 = (*(code *)puVar1)(uVar4,"boolValue");
    if ((cVar2 == '\0') || (lVar3 = _AMSupportHttpCopyProxySettings(0,0), lVar3 == 0))
    goto LAB_000073e3;
  }
  else {
    (*(code *)PTR__objc_retain_004410a8)(lVar3);
  }
  NSURLSessionConfiguration::setConnectionProxyDictionary_
            (self,"setConnectionProxyDictionary:",lVar3);
  (*(code *)PTR__objc_release_004410a0)(lVar3);
LAB_000073e3:
  (*(code *)puVar1)(*(undefined8 *)(param_1 + 0x10),self,"setTimeoutIntervalForRequest:");
  NSURLSessionConfiguration::setAllowsCellularAccess_(self,"setAllowsCellularAccess:",1);
  NSURLSessionConfiguration::set_shouldSkipPreferredClientCertificateLookup_
            (self,"set_shouldSkipPreferredClientCertificateLookup:",1);
  return self;
}


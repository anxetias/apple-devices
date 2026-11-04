// rea decompile_all
// name: FTABFileBackDeploy::createFileHandleForWritingToURL:
// address: 0x238c02
// body: available
// range: 0x238c02-0x238ea0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x238e62 to 0x2aa58a _objc_autoreleaseReturnValue (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x18 bytes */

ID FTABFileBackDeploy::createFileHandleForWritingToURL_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  undefined *puVar2;
  char cVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  uVar4 = (*(code *)PTR__objc_retain_004410a8)(param_3);
  puVar2 = PTR__objc_msgSend_00441098;
  uVar5 = (*(code *)PTR__objc_msgSend_00441098)(&_OBJC_CLASS___NSFileManager,"defaultManager");
  uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
  local_38 = uVar4;
  uVar4 = (*(code *)puVar2)(uVar4,"path");
  uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
  local_40 = uVar5;
  cVar3 = (*(code *)puVar2)(uVar5,"fileExistsAtPath:",uVar4);
  (*(code *)PTR__objc_release_004410a0)(uVar4);
  if (cVar3 == '\0') {
LAB_00238ced:
    uVar4 = (*(code *)puVar2)(&_OBJC_CLASS___NSFileManager,"defaultManager");
    uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
    uVar5 = (*(code *)puVar2)(local_38,"path");
    uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
    cVar3 = (*(code *)puVar2)(uVar4,"createFileAtPath:contents:attributes:",uVar5,0,0);
    puVar2 = PTR__objc_release_004410a0;
    (*(code *)PTR__objc_release_004410a0)(uVar5);
    (*(code *)puVar2)(uVar4);
    uVar5 = local_38;
    if (cVar3 != '\0') {
      local_48 = 0;
      uVar4 = (*(code *)PTR__objc_msgSend_00441098)
                        (&_OBJC_CLASS___NSFileHandle,"fileHandleForWritingToURL:error:",local_38,
                         &local_48);
      lVar7 = _objc_retainAutoreleasedReturnValue(uVar4);
      uVar4 = (*(code *)PTR__objc_retain_004410a8)(local_48);
      if (lVar7 == 0) {
        uVar6 = _os_log_create("com.apple.accessoryupdater.ftab","writing");
        cVar3 = _os_log_type_enabled(uVar6,0x10);
        if (cVar3 != '\0') {
          __FTABFileBackDeploy_createFileHandleForWritingToURL___cold_2(uVar5,uVar4,uVar6);
        }
        (*(code *)PTR__objc_release_004410a0)(uVar6);
      }
      goto LAB_00238e37;
    }
    uVar4 = _os_log_create("com.apple.accessoryupdater.ftab","writing");
    cVar3 = _os_log_type_enabled(uVar4,0x10);
    if (cVar3 == '\0') {
      lVar7 = 0;
      goto LAB_00238e37;
    }
    __FTABFileBackDeploy_createFileHandleForWritingToURL___cold_3(uVar5,"path",uVar4);
  }
  else {
    uVar4 = (*(code *)puVar2)(local_38,"path");
    uVar5 = _objc_retainAutoreleasedReturnValue(uVar4);
    local_50 = 0;
    cVar3 = (*(code *)puVar2)(local_40,"removeItemAtPath:error:",uVar5,&local_50);
    uVar4 = (*(code *)PTR__objc_retain_004410a8)(local_50);
    (*(code *)PTR__objc_release_004410a0)(uVar5);
    if (cVar3 != '\0') {
      (*(code *)PTR__objc_release_004410a0)(uVar4);
      goto LAB_00238ced;
    }
    uVar6 = _os_log_create("com.apple.accessoryupdater.ftab","writing");
    cVar3 = _os_log_type_enabled(uVar6,0x10);
    uVar5 = local_38;
    if (cVar3 != '\0') {
      __FTABFileBackDeploy_createFileHandleForWritingToURL___cold_1(local_38,"path",uVar6);
    }
    (*(code *)PTR__objc_release_004410a0)(uVar6);
  }
  lVar7 = 0;
LAB_00238e37:
  puVar2 = PTR__objc_release_004410a0;
  (*(code *)PTR__objc_release_004410a0)(uVar4);
  (*(code *)puVar2)(local_40);
  (*(code *)puVar2)(uVar5);
  IVar1 = _objc_autoreleaseReturnValue(lVar7);
  return IVar1;
}


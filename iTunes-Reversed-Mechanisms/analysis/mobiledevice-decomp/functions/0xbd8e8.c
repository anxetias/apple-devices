// rea decompile_all
// name: _MISCopyErrorStringForErrorCodeUnlocalized
// address: 0xbd8e8
// body: available
// range: 0xbd8e8-0xbdbef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0xbdb88 to 0x2a98dc _CFStringCreateWithFormat (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0xbdbeb to 0x2a989a _CFStringCreateCopy (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _MISCopyErrorStringForErrorCodeUnlocalized(undefined4 param_1)

{
  cfstringStruct *pcVar1;
  undefined8 uVar2;
  
  switch(param_1) {
  case 0xe8008001:
    uVar2 = *(undefined8 *)PTR__kCFAllocatorDefault_004410e8;
    pcVar1 = &cf_Anunknownerrorhasoccurred_;
    break;
  case 0xe8008002:
    uVar2 = *(undefined8 *)PTR__kCFAllocatorDefault_004410e8;
    pcVar1 = &cf_Attemptedtomodifyanimmutableprovisioningprofile_;
    break;
  case 0xe8008003:
  case 0xe8008005:
  case 0xe8008006:
  case 0xe8008007:
  case 0xe8008008:
    uVar2 = *(undefined8 *)PTR__kCFAllocatorDefault_004410e8;
    pcVar1 = &cf_Thisprovisioningprofileismalformed_;
    break;
  case 0xe8008004:
  case 0xe800800e:
  case 0xe8008013:
  case 0xe800801a:
    uVar2 = *(undefined8 *)PTR__kCFAllocatorDefault_004410e8;
    pcVar1 = &
             cf_Thisprovisioningprofiledoesnothaveavalidsignature_orithasavalid_butuntrustedsignature__
    ;
    break;
  case 0xe8008009:
    uVar2 = *(undefined8 *)PTR__kCFAllocatorDefault_004410e8;
    pcVar1 = &cf_Thesignaturewasnotvalid_;
    break;
  case 0xe800800a:
    uVar2 = *(undefined8 *)PTR__kCFAllocatorDefault_004410e8;
    pcVar1 = &cf_Unabletoallocatememory_;
    break;
  case 0xe800800b:
    uVar2 = *(undefined8 *)PTR__kCFAllocatorDefault_004410e8;
    pcVar1 = &cf_Afileoperationfailed_;
    break;
  case 0xe800800c:
  case 0xe800800d:
  case 0xe800801b:
    uVar2 = *(undefined8 *)PTR__kCFAllocatorDefault_004410e8;
    pcVar1 = &cf_Therewasanerrorcommunicatingwithyourdevice_;
    break;
  case 0xe800800f:
    uVar2 = *(undefined8 *)PTR__kCFAllocatorDefault_004410e8;
    pcVar1 = &cf_Theapplication_ssignatureisvalidbutitdoesnotmatchtheexpectedhash_;
    break;
  case 0xe8008010:
    uVar2 = *(undefined8 *)PTR__kCFAllocatorDefault_004410e8;
    pcVar1 = &cf_Thisprovisioningprofileisunsupported_;
    break;
  case 0xe8008011:
    uVar2 = *(undefined8 *)PTR__kCFAllocatorDefault_004410e8;
    pcVar1 = &cf_Thisprovisioningprofilehasexpired_;
    break;
  case 0xe8008012:
    uVar2 = *(undefined8 *)PTR__kCFAllocatorDefault_004410e8;
    pcVar1 = &cf_Thisprovisioningprofilecannotbeinstalledonthisdevice_;
    break;
  case 0xe8008014:
    uVar2 = *(undefined8 *)PTR__kCFAllocatorDefault_004410e8;
    pcVar1 = &cf_Theexecutablecontainsaninvalidsignature_;
    break;
  case 0xe8008015:
    uVar2 = *(undefined8 *)PTR__kCFAllocatorDefault_004410e8;
    pcVar1 = &cf_Avalidprovisioningprofileforthisexecutablewasnotfound_;
    break;
  case 0xe8008016:
    uVar2 = *(undefined8 *)PTR__kCFAllocatorDefault_004410e8;
    pcVar1 = &cf_Theexecutablewassignedwithinvalidentitlements_;
    break;
  case 0xe8008017:
    uVar2 = *(undefined8 *)PTR__kCFAllocatorDefault_004410e8;
    pcVar1 = &cf_Asignedresourcehasbeenadded_modified_ordeleted_;
    break;
  case 0xe8008018:
    uVar2 = *(undefined8 *)PTR__kCFAllocatorDefault_004410e8;
    pcVar1 = &cf_Theidentityusedtosigntheexecutableisnolongervalid_;
    break;
  case 0xe8008019:
    uVar2 = *(undefined8 *)PTR__kCFAllocatorDefault_004410e8;
    pcVar1 = &cf_Theapplicationdoesnothaveavalidsignature_;
    break;
  case 0xe800801c:
    uVar2 = *(undefined8 *)PTR__kCFAllocatorDefault_004410e8;
    pcVar1 = &cf_Nocodesignaturefound_;
    break;
  case 0xe800801d:
    uVar2 = *(undefined8 *)PTR__kCFAllocatorDefault_004410e8;
    pcVar1 = &cf_Rejectedbypolicy_;
    break;
  case 0xe800801e:
    uVar2 = *(undefined8 *)PTR__kCFAllocatorDefault_004410e8;
    pcVar1 = &cf_Therequestedprofiledoesnotexist_itmayhavebeenremoved__;
    break;
  case 0xe800801f:
    uVar2 = *(undefined8 *)PTR__kCFAllocatorDefault_004410e8;
    pcVar1 = &cf_AttemptedtoinstallaBetaprofilewithouttheproperentitlement_;
    break;
  case 0xe8008020:
    uVar2 = *(undefined8 *)PTR__kCFAllocatorDefault_004410e8;
    pcVar1 = &cf_AttemptedtoinstallaBetaprofileoverlockdownconnection_;
    break;
  case 0xe8008021:
    uVar2 = *(undefined8 *)PTR__kCFAllocatorDefault_004410e8;
    pcVar1 = &cf_Themaximumnumberofappsforfreedevelopmentprofileshasbeenreached_;
    break;
  case 0xe8008022:
    uVar2 = *(undefined8 *)PTR__kCFAllocatorDefault_004410e8;
    pcVar1 = &cf_Anerroroccuredwhileaccessingtheprofiledatabase_;
    break;
  case 0xe8008023:
    uVar2 = *(undefined8 *)PTR__kCFAllocatorDefault_004410e8;
    pcVar1 = &cf_Anerroroccuredwhilecommunicatingwiththeagent_;
    break;
  case 0xe8008024:
    uVar2 = *(undefined8 *)PTR__kCFAllocatorDefault_004410e8;
    pcVar1 = &cf_Theprovisioningprofileisbanned_;
    break;
  case 0xe8008025:
    uVar2 = *(undefined8 *)PTR__kCFAllocatorDefault_004410e8;
    pcVar1 = &cf_Theuserdidnotexplicitlytrusttheprovisioningprofile_;
    break;
  case 0xe8008026:
    uVar2 = *(undefined8 *)PTR__kCFAllocatorDefault_004410e8;
    pcVar1 = &cf_Theprovisioningprofilerequiresonlineauthorization_;
    break;
  case 0xe8008027:
    uVar2 = *(undefined8 *)PTR__kCFAllocatorDefault_004410e8;
    pcVar1 = &cf_Thecdhashisnotinthetrustcache_;
    break;
  case 0xe8008028:
    uVar2 = *(undefined8 *)PTR__kCFAllocatorDefault_004410e8;
    pcVar1 = &cf_Invalidargumentsoroptioncombination_;
    break;
  case 0xe8008029:
    uVar2 = *(undefined8 *)PTR__kCFAllocatorDefault_004410e8;
    pcVar1 = &cf_Thecodesignatureversionisnolongersupported_;
    break;
  case 0xe800802a:
    uVar2 = *(undefined8 *)PTR__kCFAllocatorDefault_004410e8;
    pcVar1 = &
             cf_Theapplication_ssignatureisvalid_butaprovisioningprofilecannotbefoundthatmatchesthisversion_
    ;
    break;
  default:
    _CFStringCreateWithFormat
              (*(undefined8 *)PTR__kCFAllocatorDefault_004410e8,0,
               &cf_Anunexpectederrorwasencountered_0x_X_);
    return;
  }
  _CFStringCreateCopy(uVar2,pcVar1);
  return;
}


// rea decompile_all
// name: ___52-[AMSupportStaticURLSession_sendRequest:completion:]_block_invoke_2
// address: 0x78f1
// body: available
// range: 0x78f1-0x7934 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void ___52__AMSupportStaticURLSession_sendRequest_completion___block_invoke_2(long param_1)

{
  long lVar1;
  code *UNRECOVERED_JUMPTABLE;
  ID IVar2;
  
  lVar1 = *(long *)(param_1 + 0x20);
  IVar2 = NSError::errorWithDomain_code_userInfo_
                    ((ID)&_OBJC_CLASS___NSError,"errorWithDomain:code:userInfo:",&cf_AMSupportError,
                     3,0);
  UNRECOVERED_JUMPTABLE = *(code **)(lVar1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00007932. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(lVar1,0,0,IVar2,UNRECOVERED_JUMPTABLE);
  return;
}


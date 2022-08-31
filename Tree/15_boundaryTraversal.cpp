/*
bool leaf(Node *root){
    if (!root->left && !root->right)
        return 1;
    return 0;
}
void left(Node *root, vector<int> &ans)
{
    Node *curr = root->left;
    while (curr)
    {
        if (!leaf(curr))
            ans.push_back(curr->data);
        if (curr->left)
            curr = curr->left;
        else
            curr = curr->right;
    }
}

void leaves(Node *root, vector<int> &ans){
    if (leaf(root)){
        ans.push_back(root->data);
        return;
    }

    if (root->left)
        leaves(root->left, ans);
    if (root->right)
        leaves(root->right, ans);
}

void right(Node *root, vector<int> &ans){
    Node *curr = root->right;
    vector<int> temp;
    while (curr)
    {
        if (!leaf(curr))
            temp.push_back(curr->data);
        if (curr->right)
            curr = curr->right;
        else
            curr = curr->left;
    }
    for (int i = temp.size() - 1; i >= 0; i--)
        ans.push_back(temp[i]);
}

vector<int> boundary(Node *root){
    vector<int> ans;
    if (!root)
        return ans;
    if (!leaf(root))
        ans.push_back(root->data);
    left(root, ans);
    leaves(root, ans);
    right(root, ans);
    return ans;
}
*/
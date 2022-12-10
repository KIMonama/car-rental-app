# Car Rental App #

## Table of Contents ##

<details>

<summary>Contents</summary>

1. [About The Project](#about-the-project)
1. [How it Works](#how-it-works)
1. [Workflow](#workflow)
1. [To do](#to-do)

</details>

## About The Project ##

Car Rental App is a desktop app that simulates a car rental booking system by allowing the user to book a car of their choice for a period of time.

## How it Works ##

1. The user selects a car.
1. The user selects the number of days they want to rent the car for.
1. When the user clicks the Book button, the app calculates the total amount including the cost of car rental, optional extras costs, and 15% VAT.

## Workflow ##

To add a feature,

1. To get started, create a fork of this repository and cd into it.

    ```
    gh repo fork "https://github.com/SDI1/car-rental-app/"
    cd car-rental-app/
    ```

1. Set up your local main branch to track the upstream main branch.

    ```
    git branch -u upstream/main
    ```

1. Create your feature branch.

    ```
    git checkout -b "add-new-feature"
    ```

1. When you're done coding, commit your changes.

    ```
    git add .
    git commit -m "Add new feature"
    ```

1. Push your changes to the branch.

    ```
    git push -u origin "add-new-feature"
    ```

1. Open a pull request.

    ```
    gh pr create
    ```

1. Once your branch has been merged with the main branch, return to the main branch.

    ```
    git checkout main
    ```

1. Your local main branch is now behind the remote branch. Pull the changes you just pushed upstream back into your main branch.

    ```
    git pull
    ```

1. You no longer need the add-new-feature branch. Delete the dead branch from your local and remote fork.

    ```
    git branch --delete "add-new-feature"
    git push --delete origin "add-new-feature"
    ```

    That's it, you've added a new feature! To add another feature, simply restart from step 2.

## To do ##

- [ ] Add optional "Extras" such as theft/accidental damage insurance, child seat, and over border permit.
- [ ] Add registration screen.
